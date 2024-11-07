/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:28:21 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/05 13:42:34 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int		main(void)
{
	int		num_or_other;
	char	str[] = "";

	num_or_other = ft_str_is_numeric(str);
	
	if (num_or_other == 1)
		printf("carac. numeric. ou est vide : %d", num_or_other);
	else if (num_or_other == 0)
		printf("contient autre chose : %d", num_or_other);
	else
	{
		printf("ya un soucis mon pote");
		return (-1);
	}
	return (0);
}
*/