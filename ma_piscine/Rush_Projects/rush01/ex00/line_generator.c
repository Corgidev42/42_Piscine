/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_generator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 06:23:21 by heperez           #+#    #+#             */
/*   Updated: 2024/09/15 14:23:27 by heperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	tab_init(int *tab)
{
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 2;
}

void	fill_tab(int *tab, int comb_tab[24][4], int i)
{
	int	k;

	k = 0;
	while (k < 4)
	{
		comb_tab[i][k] = tab[k];
		k++;
	}
}

int	only_numbers(int *tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tab[i] < 1 || tab[i] > 4)
			return (0);
		i++;
	}
	return (1);
}

int	no_double(int *tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = i + 1;
		while (j < 4)
		{
			if (j == i)
				i++;
			if (tab[i] == tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	line_combination(int comb_tab[24][4], int i, int l)
{
	int	tab[4];

	tab_init(tab);
	while (1)
	{
		if (tab[0] == 4 && tab[1] == 4)
			return ;
		tab[3] = tab[3] + 1;
		while (i > -1)
		{
			if (tab[i] > 4)
			{
				tab[i] = 1;
				tab[i - 1] = tab[i - 1] + 1;
			}
			i--;
		}
		i = 3;
		if (tab[0] + tab[1] + tab[2] + tab[3] == 10
			&& (only_numbers(tab) == 1 && no_double(tab) == 1))
		{
			fill_tab(tab, comb_tab, l);
			l++;
		}
	}
}
