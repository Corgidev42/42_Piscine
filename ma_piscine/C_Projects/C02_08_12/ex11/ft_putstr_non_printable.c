/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:49:21 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/16 19:16:52 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_int_tab(char *hex_digits)
{
	hex_digits[0] = '0';
	hex_digits[1] = '1';
	hex_digits[2] = '2';
	hex_digits[3] = '3';
	hex_digits[4] = '4';
	hex_digits[5] = '5';
	hex_digits[6] = '6';
	hex_digits[7] = '7';
	hex_digits[8] = '8';
	hex_digits[9] = '9';
	hex_digits[10] = 'a';
	hex_digits[11] = 'b';
	hex_digits[12] = 'c';
	hex_digits[13] = 'd';
	hex_digits[14] = 'e';
	hex_digits[15] = 'f';
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex_digits[16];

	ft_int_tab(hex_digits);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			ft_putchar('\\');
			str[i] = hex_digits[(int)str[i]];
			ft_putchar(str[i]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
/*
int	main(void)
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
} */
