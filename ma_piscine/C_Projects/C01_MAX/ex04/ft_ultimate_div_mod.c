/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:34:31 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/04 17:18:38 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*
#include <stdio.h>

int		main (void)
{
	int nb_1 = 17;
	int nb_2 = 5;
	ft_ultimate_div_mod(&nb_1, &nb_2);
	printf("quotien : %d\nreste: %d\n", nb_1, nb_2 );
	return 0;
}
*/
