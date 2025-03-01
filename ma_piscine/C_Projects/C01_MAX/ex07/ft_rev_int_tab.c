/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:28:02 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/10 13:44:35 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	size;
	int	tab[] = {1, 2, 3, 4};

	size = 4;
	ft_rev_int_tab(tab, size);
	for(int i = 0 ; i < size ; i++)
	{
		printf("%d", tab[i]);
	}
	return (0);
}
*/
