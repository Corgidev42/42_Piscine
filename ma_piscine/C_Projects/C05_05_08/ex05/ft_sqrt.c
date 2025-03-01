/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:13:13 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/10 17:35:33 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	nbr_base;
	int	result;

	result = 0;
	nbr_base = 1;
	if (nb < 0)
		return (-1);
	if (nb == 0)
		return (0);
	while (nbr_base * nbr_base != nb)
	{
		result = nbr_base * nbr_base;
		nbr_base++;
		if (nb < result)
			return (0);
	}
	return (nbr_base);
}
/*
#include <stdio.h>

int	main(void)
{
	int	test;

	test = 390625;
	printf("%d", ft_sqrt(test));
}
*/
