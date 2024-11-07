/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:08:07 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/18 17:44:42 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_gen_comb(int comb[], int index, int n, int next)
{
	int	i;

	if (index == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(comb[i] + '0');
			i++;
		}
		if (comb[0] != (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	i = next;
	while (i <= 9)
	{
		comb[index] = i;
		ft_gen_comb(comb, index + 1, n, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[9];

	if (n >= 1 && n <= 9)
		ft_gen_comb(comb, 0, n, 0);
}

/* int	main(void)
{
	int	comb = 9;
	ft_print_combn(comb);
	return 0;
}
 */