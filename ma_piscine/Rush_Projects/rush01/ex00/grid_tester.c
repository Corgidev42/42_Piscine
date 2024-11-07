/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_tester.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:11:14 by heperez           #+#    #+#             */
/*   Updated: 2024/09/15 16:18:29 by heperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_view_left(int to_see, int *rows);
int	ft_view_right(int to_see, int *rows);
int	ft_view_up(int to_see, int cols[4][4], int i);
int	ft_view_down(int to_see, int cols[4][4], int i);

int	check_all_cols(int to_see[4][4], int tab[4][4])
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

int	check_all_rows(int to_see[4][4], int tab[4][4])
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
	if (check_all_cols(to_see, tab) == 0)
		return (0);
	if (check_all_rows(to_see, tab) == 0)
		return (0);
	return (1);
}
