/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:34:25 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/04 15:34:27 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int		main (void)
{
	int	nb_1;
	int	nb_2;
	int	div;
	int	mod;

	nb_1 = 17;
	nb_2 = 5;
	ft_div_mod(nb_1, nb_2, &div, &mod);
	printf("resultat = %f\n", div + ( (float)mod / (float)nb_2));
	return (0);
}
*/
