/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:09:47 by heperez           #+#    #+#             */
/*   Updated: 2024/09/15 16:13:48 by heperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	check_argument(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	while (argv[1][i] != '\0')
	{
		if ((argv[1][i] < '1' || argv[1][i] > '4') && argv[1][i] != ' ')
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	if (i != 31)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	ft_babytoi(char c)
{
	return (c - '0');
}

int	total_params(char *str)
{
	int	i;
	int	total;

	total = 0;
	i = 0;
	while (str[i])
	{
		while (!(str[i] < '9' && str[i] > '0'))
		{
			i++;
		}
		while (str[i] < '9' && str[i] > '0')
		{
			i++;
		}
		total++;
	}
	return (total);
}

int	*ft_str_to_list(char *str)
{
	int	i;
	int	j;
	int	*entry_tab;

	entry_tab = malloc(sizeof(int) * total_params(str));
	if (entry_tab == NULL)
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			entry_tab[j++] = ft_babytoi(str[i]);
			while (str[i] >= '0' && str[i] <= '9')
				i++;
		}
		else
			i++;
	}
	return (entry_tab);
}

void	fill_tab_index(int tab_index[4][4], char *str)
{
	int	i;
	int	j;
	int	k;
	int	*number_list;

	number_list = ft_str_to_list(str);
	k = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab_index[i][j] = number_list[k];
			k++;
			j++;
		}
		i++;
	}
	free(number_list);
}
