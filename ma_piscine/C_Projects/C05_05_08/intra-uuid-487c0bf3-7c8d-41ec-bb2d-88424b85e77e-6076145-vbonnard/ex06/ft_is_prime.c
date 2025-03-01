/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:59:02 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/20 00:38:04 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0 || nb == 1)
		return (0);
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

/* #include <stdio.h>

int main (void)
{
	int	i = 42;
	printf("%d", ft_is_prime(i));
} */
