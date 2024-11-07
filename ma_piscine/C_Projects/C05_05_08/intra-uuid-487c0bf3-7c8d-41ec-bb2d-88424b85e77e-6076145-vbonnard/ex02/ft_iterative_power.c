/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:38:47 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/20 00:37:47 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbr_base;

	i = 1;
	nbr_base = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		nb = nbr_base * nb;
		i++;
	}
	return (nb);
}

/* #include <stdio.h>

int	main(void)
{
	int	nb = -2;
	int	power = 2;

	printf("%d puissance %d = %d",nb, power, ft_iterative_power(nb, power));
	return 0;
} */
