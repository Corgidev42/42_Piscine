/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:36:16 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/05 13:55:28 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>
int		main(void)
{
	int		up_or_other;
	char	str[] = "";

	up_or_other = ft_str_is_uppercase(str);

	if (up_or_other == 1)
		printf("carac.alphabet.min. ou est vide : %d", up_or_other);
	else if (up_or_other == 0)
		printf("Contient autre chose : %d", up_or_other);
	else
	{
		printf("ya un soucis mon pote");
		return (-1);
	}
	return (0);
}
*/
