/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:17:10 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/15 18:31:48 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_view_left(int to_see, int *rows)
{
	int	skyscraper;
	int	max;

	max = 0;
	skyscraper = 0;
	if (rows[0] >= 1)
		skyscraper++;
	if (rows[0] > max)
		max = rows[0];
	if (rows[1] > rows[0] && rows[1] > max)
		skyscraper++;
	if (rows[1] > max)
		max = rows[1];
	if (rows[2] > rows[1] && rows[2] > max)
		skyscraper++;
	if (rows[2] > max)
		max = rows[2];
	if (rows[3] > rows[2] && rows[3] > max)
		skyscraper++;
	if (rows[3] > max)
		max = rows[3];
	if (to_see == skyscraper)
		return (1);
	return (0);
}

int	ft_view_right(int to_see, int *rows)
{
	int	skyscraper;
	int	max;

	max = 0;
	skyscraper = 0;
	if (rows[3] >= 1)
		skyscraper++;
	if (rows[3] > max)
		max = rows[3];
	if (rows[2] > rows[3] && rows[2] > max)
		skyscraper++;
	if (rows[2] > max)
		max = rows[2];
	if (rows[1] > rows[2] && rows[1] > max)
		skyscraper++;
	if (rows[1] > max)
		max = rows[1];
	if (rows[0] > rows[1] && rows[0] > max)
		skyscraper++;
	if (rows[0] > max)
		max = rows[0];
	if (to_see == skyscraper)
		return (1);
	return (0);
}

int	ft_view_up(int to_see, int cols[4][4], int i)
{
	int	skyscraper;
	int	max;

	max = 0;
	skyscraper = 0;
	if (cols[0][i] >= 1)
		skyscraper++;
	if (cols[0][i] > max)
		max = cols[0][i];
	if (cols[1][i] > cols[0][i] && cols[1][i] > max)
		skyscraper++;
	if (cols[1][i] > max)
		max = cols[1][i];
	if (cols[2][i] > cols[1][i] && cols[2][i] > max)
		skyscraper++;
	if (cols[2][i] > max)
		max = cols[2][i];
	if (cols[3][i] > cols[2][i] && cols[3][i] > max)
		skyscraper++;
	if (cols[3][i] > max)
		max = cols[3][i];
	if (to_see == skyscraper)
		return (1);
	return (0);
}

int	ft_view_down(int to_see, int cols[4][4], int i)
{
	int	skyscraper;
	int	max;

	max = 0;
	skyscraper = 0;
	if (cols[3][i] >= 1)
		skyscraper++;
	if (cols[3][i] > max)
		max = cols[3][i];
	if (cols[2][i] > cols[3][i] && cols[2][i] > max)
		skyscraper++;
	if (cols[2][i] > max)
		max = cols[2][i];
	if (cols[1][i] > cols[2][i] && cols[1][i] > max)
		skyscraper++;
	if (cols[1][i] > max)
		max = cols[1][i];
	if (cols[0][i] > cols[1][i] && cols[0][i] > max)
		skyscraper++;
	if (cols[0][i] > max)
		max = cols[0][i];
	if (to_see == skyscraper)
		return (1);
	return (0);
}

int	check_All_cols(int to_see[4][4], int tab[4][4])
{
	int	i;
	int	j;
	int	check;

	j = 0;
	i = 0;
	check = 0;
	while (i < 4)
	{
		if (ft_view_up(to_see[0][j], tab, i) == 1)
			check++;
		if (ft_view_down(to_see[1][j], tab, i) == 1)
			check++;
		i++;
		j++;
	}
	if (check == 8)
		return (1);
	else
		return (0);
}

int	check_All_rows(int to_see[4][4], int tab[4][4])
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (i < 4)
	{
		if (ft_view_left(to_see[2][i], tab[i]) == 1)
			check++;
		if (ft_view_right(to_see[3][i], tab[i]) == 1)
			check++;
		i++;
	}
	if (check == 8)
		return (1);
	else
		return (0);
}

int	check_grid(int to_see[4][4], int tab[4][4])
{
	if (!check_All_cols(to_see, tab))
		return (0);
	if (!check_All_rows(to_see, tab))
		return (0);
	return (1);
}

#include <stdio.h>

int main(void)
{
	int tab[4][4] = 
	{
	{1,4,2,3},
	{3,1,4,2},
	{1,2,3,4},
	{4,3,2,1}
	};
	int to_see[4][4] =  {
	{3,1,2,2},
		{1,2,3,2},
	{2,2,4,1},
		{2,2,1,4}
	};
	printf("%d", check_grid(to_see, tab));
	
	
}  