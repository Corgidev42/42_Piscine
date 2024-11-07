/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 07:45:32 by heperez           #+#    #+#             */
/*   Updated: 2024/09/15 18:53:09 by heperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_sol(int tab[4][4]);
int		check_grid(int to_see[4][4], int tab[4][4]);

void	tab_init2(int *tab)
{
	tab[0] = -1;
	tab[1] = -1;
	tab[2] = -1;
	tab[3] = -1;
}

void	add_comb(int *dest, int *src)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		dest[i] = src[i];
		i++;
	}
}

int	check_col(int tab[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tab[0][i] + tab[1][i] + tab[2][i] + tab[3][i] != 10)
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_solve(int tab[4][4], int tab_index[4][4], int comb_tab[24][4])
{
	int	var[4];

	tab_init2(var);
	while (++var[0] < 24)
	{
		add_comb(tab[0], comb_tab[var[0]]);
		while (++var[1] < 24)
		{
			add_comb(tab[1], comb_tab[var[1]]);
			while (++var[2] < 24)
			{
				add_comb(tab[2], comb_tab[var[2]]);
				while (++var[3] < 24)
				{
					add_comb(tab[3], comb_tab[var[3]]);
					if (check_grid(tab_index, tab) && check_col(tab) == 1)
						return (1);
				}
				var[3] = -1;
			}
			var[2] = -1;
		}
		var[1] = -1;
	}
	return (0);
}
