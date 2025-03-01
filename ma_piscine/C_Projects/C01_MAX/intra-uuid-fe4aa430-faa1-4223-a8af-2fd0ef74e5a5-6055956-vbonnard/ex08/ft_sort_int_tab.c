/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:27:59 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/10 13:53:14 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		temp;
	int		i;
	int		j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] - tab[j + 1] > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	size = 6;
	int	tab[] = {3, 2, 1, 5, 4, 0};

	ft_sort_int_tab(tab, size);
	for(int i = 0 ; i < size ; i++)
	{
		printf("%d", tab[i]);
	}

	return 0;
}
*/
