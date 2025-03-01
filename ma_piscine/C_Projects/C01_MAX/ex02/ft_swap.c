/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+
 */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:34:20 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/04 17:17:08 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b) {
  int temp;

  temp = *b;
  *b = *a;
  *a = temp;
}

/*
#include <stdio.h>

int		main (void)
{
	int	nb_1;
	int	nb_2;

        nb_1 = 23;
        nb_2 = 42;
        printf("AVANT :\nnombre 1 : %d\n nombre 2 : %d\n", nb_1, nb_2);
        ft_swap(&nb_1, &nb_2);
        printf("APRES :\nnombre 1 : %d\n nombre 2 : %d\n", nb_1, nb_2);
        return (0);
}
*/
