/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:19:53 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/12 14:32:58 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

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

	i = 0;
	while (i < 256)
	{
		buffer[i] = 0;
		i++;
	}
	j = 0;
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

int	index_in_base(char charac, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (charac == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	keep_str(char *str, int index, int *sign)
{
	while (str[index] && (str[index] == 32
			|| (str[index] >= 9 && str[index] <= 13)))
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			*sign = -*sign;
		index++;
	}
	return (index);
}

int	ft_atoi_base(char *str, char *base)
{
	int	long_base;
	int	sign;
	int	i;
	int	nb;

	nb = 0;
	i = 0;
	sign = 1;
	long_base = ft_long_base(base);
	if (ft_base_test(base) == 1)
	{
		i = keep_str(str, i, &sign);
		while (index_in_base(str[i], base) != -1)
		{
			nb = nb * long_base + index_in_base(str[i], base);
			i++;
		}
	}
	return (nb * sign);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d",ft_atoi_base((argv[1]), argv[2]));
	}

	return (0);
}
*/
