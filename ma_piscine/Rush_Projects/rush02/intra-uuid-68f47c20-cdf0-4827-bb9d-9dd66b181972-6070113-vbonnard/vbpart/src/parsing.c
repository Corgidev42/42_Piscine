/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:46:08 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/22 18:00:50 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "../includes/parsing.h"
#include "../includes/tools.h"

t_dict_entry	*g_dict = NULL;
int				g_dict_index = 0;

int	ft_count_lines(char *filename)
{
	int		file;
	int		nb_octet_read;
	char	buffer[BUFFER_SIZE];
	int		i;
	int		line_count;

	i = 0;
	line_count = 0;
	file = open(filename, O_RDONLY);
	nb_octet_read = read(file, buffer, BUFFER_SIZE);
	if (file == -1)
	{
		write(1, "Dict error\n", 11);
		return (1);
	}
	while (i < nb_octet_read)
	{
		if (buffer[i] == '\n')
			line_count++;
		i++;
	}
	close(file);
	if (buffer[nb_octet_read - 1] != '\n')
		line_count++;
	return (line_count);
}

char	*ft_delete_space(char *str)
{
	int	start;
	int	end;

	if (str == NULL || str[0] == '\0')
		return (str);
	start = 0;
	end = ft_strlen(str) - 1;
	while (str[start] == ' ')
		start++;
	while (end > start && str[end] == ' ')
		end--;
	str[end + 1] = '\0';
	return (&str[start]);
}

void	ft_store_entry(char *number, char *text, int line_count)
{
	if (g_dict == NULL)
	{
		g_dict = malloc(sizeof(t_dict_entry) * line_count);
		if (g_dict == NULL)
		{
			write(1, "Memory allocation error\n", 24);
			return ;
		}
	}
	g_dict[g_dict_index].number = ft_strdup(number);
	g_dict[g_dict_index].text = ft_strdup(text);
	g_dict_index++;
}

void	ft_read_line(char *line, int line_count)
{
	int		i;
	char	*number;
	char	*text;

	i = 0;
	while (line[i] != ':' && line[i] != '\0')
		i++;
	if (line[i] == '\0')
		return ;
	line[i] = '\0';
	number = ft_delete_space(line);
	text = ft_delete_space(line + i + 1);
	if (number[0] == '\0' || text[0] == '\0')
	{
		write(1, "Dict error\n", 11);
		return ;
	}
	ft_store_entry(number, text, line_count);
}

int	ft_read_file(char *filename, char *buffer)
{
	int	file;
	int	nb_octet_read;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		write(1, "Dict error\n", 11);
		return (1);
	}
	nb_octet_read = read(file, buffer, BUFFER_SIZE - 1);
	if (nb_octet_read < 0)
	{
		write(1, "Dict error\n", 11);
		return (1);
	}
	buffer[nb_octet_read] = '\0';
	close(file);
	return (0);
}

void	ft_parse_lines(char *buffer, int line_count)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
		{
			buffer[i] = '\0';
			ft_read_line(buffer + start, line_count);
			start = i + 1;
		}
		i++;
	}
	if (start < i)
		ft_read_line(buffer + start, line_count);
}
