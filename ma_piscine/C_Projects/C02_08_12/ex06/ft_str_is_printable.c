/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:39:26 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/05 13:55:42 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	int		printable_or_other;
	char	str[] = "";

	printable_or_other = ft_str_is_printable(str);
	
	if (printable_or_other == 1)
		printf("carac.imprimable ou est vide : %d", printable_or_other);
	else if (printable_or_other == 0)
		printf("Contient autre chose : %d", printable_or_other);
	else
	{
		printf("ya un soucis mon pote");
		return (-1);
	}
	return (0);
}
*/
