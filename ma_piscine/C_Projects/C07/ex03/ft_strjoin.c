/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:11:16 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/16 19:04:12 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_totallen(char **strs, char *sep, int size)
{
	int		i;
	int		total_size;

	i = 0;
	total_size = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		if (i < size - 1)
			total_size += ft_strlen(sep);
		i++;
	}
	return (total_size + 1);
}

char	*ft_join(int size, char *pos, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcpy(pos, strs[i]);
		pos += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(pos, sep);
			pos += ft_strlen(sep);
		}
		i++;
	}
	*pos = '\0';
	return (pos);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	char	*result;
	char	*current_pos;

	total_size = ft_totallen(strs, sep, size);
	result = (char *)malloc(sizeof (char) * total_size);
	current_pos = result;
	if (size == 0 || result == NULL)
		return (NULL);
	ft_join(size, current_pos, strs, sep);
	return (result);
}

/* int	main(void)
{
	int		size = 1;
	char	*dico[] = {"j","aime","les","voitures"};
	char	*sep = " ";
	char	*strjoin;
	strjoin = ft_strjoin(size, dico, sep);
	printf("%s\n", strjoin);
	free(strjoin);
	return (0);
}
 */