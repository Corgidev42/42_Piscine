/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:17:59 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/16 18:07:31 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy_str;

	cpy_str = malloc(sizeof(char) * ft_strlen(src));
	i = 0;
	if (cpy_str == NULL)
		return (NULL);
	while (src[i])
	{
		cpy_str[i] = src[i];
		i++;
	}
	return (cpy_str);
}

/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		char	*str_cpy = ft_strdup(argv[1]);
		printf("%s", str_cpy);
		free(str_cpy);
	}
	return 0;
}
*/