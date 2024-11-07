/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:31:18 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/09 15:37:58 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0)
		return (1);
	while (i >= 1)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 3;
	printf("factoriel de %d est : %d",i, ft_iterative_factorial(i));
	return 0;
}
*/