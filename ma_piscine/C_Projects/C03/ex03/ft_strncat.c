/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:16:41 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/09 19:01:30 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*

#include <stdio.h>
#include <string.h>

int		main(void)
{
	char src[] = "Wsh ma gueule, je suis 42";
	char dest[50] = "Ptdr, tu es qui ?";
	unsigned int nb_max_charc = 5;

	*dest = *ft_strncat(dest, src, nb_max_charc);
	*dest = *strncat(dest, src, nb_max_charc);

	printf("%s", dest);
	return (0);
}
*/