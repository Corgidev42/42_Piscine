/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebagoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:29:30 by bebagoua          #+#    #+#             */
/*   Updated: 2024/09/21 17:34:07 by bebagoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_length(int nb)
{
	int length;

	length = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		length++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(unsigned int nb)
{
	char	*str;
	int	i;
	unsigned int	n;

	n = nb;
	i = ft_length(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if(!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n == 0)
	{
		str[0] = 48;
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
	{
		str[i] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}

int	main(void)
{
	int	i;

	i = 0;
	unsigned int	nb = 1000000000000000;

	printf("%s\n", ft_itoa(nb));
	return (0);

}
