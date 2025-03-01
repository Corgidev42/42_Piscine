/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:58:23 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/05 12:00:32 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
				&& str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	int		alpha_or_other;
	char	str[] = "adasfadg";

	alpha_or_other = ft_str_is_alpha(str);
	if (alpha_or_other == 1)
		printf("carac.alphabet. ou est vide : %d", alpha_or_other);
	else if (alpha_or_other == 0)
		printf("Contient autre chose : %d", alpha_or_other);
	else
	{
		printf("ya un soucis mon pote");
		return (-1);
	}
	return (0);
}
*/
