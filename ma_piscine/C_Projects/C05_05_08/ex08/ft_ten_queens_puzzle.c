/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:09:41 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/20 00:36:55 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define FALSE 0
#define TRUE 1 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_puzzle(int tab[])
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

int	ft_check_puzzle(int tab[], int index)
{
	int	see_queen;
	int	pos;
	int	i;

	i = 0;
	see_queen = FALSE;
	pos = 1;
	if (index == 0)
		return (1);
	while (i < index)
	{
		if (tab[index] == tab[index - pos])
			return (0);
		if (tab[index] == (tab[index - pos]) + pos)
			see_queen = TRUE;
		if (tab[index] == (tab[index - pos]) - pos)
			see_queen = TRUE;
		pos++;
		i++;
	}
	if (see_queen == TRUE)
		return (0);
	else
		return (1);
}

void	backtracking(int tab[], int depth, int *cw)
{
	int	i;

	i = 0;
	tab[depth] = 0;
	while (i < 10)
	{
		tab[depth] = i;
		if (ft_check_puzzle(tab, depth))
		{
			if (depth == 9)
			{
				ft_print_puzzle(tab);
				(*cw)++;
			}
			else
				backtracking(tab, depth + 1, cw);
		}
		i++;
	}
	tab[depth] = -1;
	return ;
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	nbr_of_sol;
	int	i;

	i = 0;
	nbr_of_sol = 0;
	while (i < 10)
	{
		tab[i] = -1;
		i++;
	}
	backtracking(tab, 0, &nbr_of_sol);
	return (nbr_of_sol);
}

/* int main()
{
	ft_ten_queens_puzzle();
} */