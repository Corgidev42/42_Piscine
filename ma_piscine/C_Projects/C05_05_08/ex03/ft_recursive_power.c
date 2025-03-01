/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:47:11 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/20 00:37:52 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/* #include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 2;
	printf("%d^%d = %d",nb, power, ft_recursive_power(nb, power));
	return (0);
}
 */
