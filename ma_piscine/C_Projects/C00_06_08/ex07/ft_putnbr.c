/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+
 */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:04:06 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/16 11:38:57 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void	ft_putchar(char c) { write(1, &c, 1); }

void	ft_putnbr(int nb) {
  if (nb == INT_MIN)
    write(1, "-2147483648", 11);
  else if (nb < 0) {
    ft_putchar('-');
    nb = -nb;
  }
  if (nb > 9) {
    ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + 48);
  } else if (nb <= 9 && nb != INT_MIN)
    ft_putchar((nb % 10) + 48);
}
/*
int	main(void)
{
	int	test;

        test = INT_MIN;
        ft_putnbr(test);
        return (0);
}
*/
