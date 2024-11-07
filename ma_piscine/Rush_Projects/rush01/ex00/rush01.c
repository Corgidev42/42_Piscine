/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 08:48:20 by heperez           #+#    #+#             */
/*   Updated: 2024/09/15 16:42:16 by heperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		check_argument(int agrc, char **argv);
void	line_combination(int comb_tab[24][4], int i, int l);
void	fill_tab_index(int tab_index[4][4], char *str);
int		ft_solve(int tab[4][4], int tab_index[24][4], int comb_tab[4][4]);
void	ft_print_sol(int tab[4][4]);

int	main(int argc, char **argv)
{
	int	comb_tab[24][4];
	int	tab_index[4][4];
	int	tab[4][4];

	if (check_argument(argc, argv) == 1)
		return (0);
	line_combination(comb_tab, 3, 0);
	fill_tab_index(tab_index, argv[1]);
	if (ft_solve(tab, tab_index, comb_tab) == 1)
		ft_print_sol(tab);
	else
		write(1, "Error\n", 6);
	return (0);
}
