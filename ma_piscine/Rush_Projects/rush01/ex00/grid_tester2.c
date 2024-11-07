/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_tester2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:29:26 by heperez           #+#    #+#             */
/*   Updated: 2024/09/15 11:54:03 by heperez          ###   ########.fr       */
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
