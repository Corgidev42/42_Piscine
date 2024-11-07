/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:01:39 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/09 14:03:05 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (s2 == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str_1[] = "rerw";
	char	str_2[] = "";
	int		results;

	results = ft_strcmp(str_1, str_2);
	if (results < 0)
		printf("str_1 est lexico. < a str_2 : %d", results);
	else if (results > 0)
		printf("str_1 est lexico. > a str_2 : %d", results);
	else  
		printf("str_1 est lexico. = a str_2 : %d", results);
	printf("\n%d",(int)strcmp(str_1, str_2));
	

	return (0);
}
*/