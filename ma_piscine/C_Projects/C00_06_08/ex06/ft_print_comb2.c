/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:31:16 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/04 16:41:21 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbr(int n1, int n2, char *digit)
{
	digit[0] = (n1 / 10) + 48;
	digit[1] = (n1 % 10) + 48;
	digit[2] = ' ';
	digit[3] = (n2 / 10) + 48;
	digit[4] = (n2 % 10) + 48;
}

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;
	char	digit[5];

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			if (n2 > n1)
			{
				ft_print_numbr(n1, n2, digit);
				write(1, &digit, 5);
				if (!(n1 == 98 && n2 == 99))
				{
					write(1, ", ", 2);
				}
			}
			n2++;
		}
		n1++;
	}
}

/*
   int     main(void)
   {
   ft_print_comb2();
   return 0;
   }
   */
