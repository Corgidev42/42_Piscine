/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:25:45 by heperez           #+#    #+#             */
/*   Updated: 2024/09/15 15:01:14 by heperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_sol(int tab[4][4])
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			ft_putchar(tab[i][j] + 48);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
