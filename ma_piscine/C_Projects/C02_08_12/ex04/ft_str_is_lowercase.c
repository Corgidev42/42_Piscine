/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:03:15 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/05 13:55:25 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	int		low_or_other;
	char	str[] = "FDFSG";

	low_or_other = ft_str_is_lowercase(str);
	
	if (low_or_other == 1)
		printf("carac.alphabet.min. ou est vide : %d", low_or_other);
	else if (low_or_other == 0)
		printf("Contient autre chose : %d", low_or_other);
	else
	{
		printf("ya un soucis mon pote");
		return (-1);
	}
	return (0);
}
*/
