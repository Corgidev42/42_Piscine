/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:14:37 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/11 16:01:28 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] && (str[i] == 32
			|| (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str1 = "    -123sfsdfsd345";
	char *str2 = "-+++--48 174";
	char *str3 = "sdfsg+785sfsdf";
	char *str4 = "42";

	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));


	return 0;
}
*/
