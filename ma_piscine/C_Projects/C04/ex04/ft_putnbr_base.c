/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:09:44 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/11 16:55:22 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_long_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	ft_base_test(char *base)
{
	int	i;
	int	j;
	int	buffer[256];

	j = 0;
	i = 0;
	while (i < 256)
	{
		buffer[i] = 0;
		i++;
	}
	i = 0;
	while (base[i])
	{
		buffer[(unsigned char)base[j]]++;
		if (base[i] == '\0' || base[i] == '+' || base[i] == '-')
			return (0);
		if (buffer[(unsigned char)base[j]] == 2)
			return (0);
		i++;
		j++;
	}
	if (i == 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	long_base;

	long_base = ft_long_base(base);
	if (ft_base_test(base) == 1)
	{
		if (nbr == INT_MIN)
			return ;
		else if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr > long_base - 1)
		{
			ft_putnbr_base(nbr / long_base, base);
			ft_putchar(base[nbr % long_base]);
		}
		else if (nbr <= long_base - 1)
			ft_putchar(base[nbr % long_base]);
	}
}
/*
#include "stdlib.h"

int	main(int argc, char *argv[])
{

	if (argc == 3)
	{
		ft_putnbr_base(atoi(argv[1]), argv[2]);
	}

	return (0);
}
*/
