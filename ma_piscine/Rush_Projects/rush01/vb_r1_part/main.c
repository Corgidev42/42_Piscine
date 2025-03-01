/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:32:41 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/15 09:59:02 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_sol(int *tab, int size)
{
	int	i;
	int	len;

	len = 0;
	while (tab[len] != '\0')
		len++;
	i = 0;
	while (i < len)
	{
		ft_putchar(tab[i] + 48);
		i++;
		if (i % size != 0)
			ft_putchar(' ');
		else if (i % size == 0)
			ft_putchar('\n');
	}
}

/* int	ft_find_pos_rows(int index, int size)
{
	int	x;

	x = index / size;
	return (x);
}
int	ft_find_pos_cols(int index, int size)
{
	int y;

	y = index % size;
	return (y);
} */

/* #include <stdio.h>
int main(void)
{
	int tab[16] = {2,1,2,3,4,2,4,3,2,2,1,3,4,4,1,1};
	int size = 4;
	int	index = 0;
	ft_print_sol(tab , size);
	printf("colone numero : %d\n", 	ft_find_pos_cols(index, size));
	printf("ligne numero  : %d\n", 	ft_find_pos_rows(index, size));
	return 0;
} */
