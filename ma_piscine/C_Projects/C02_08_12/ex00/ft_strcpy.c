/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:32:39 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/07 17:56:28 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
PROBLEME AU NIVEAU DE LA TAILLE DES CHAINE
#include <unistd.h>

int		main(void)
{
	char str_1[] = "Bonjour 42";
	char str_2[] = "Qui est tu toi ?";
	
	*str_2 = *ft_strcpy(str_2, str_1);
	
	int		i;

	i = 0;
	while (str_1[i] != '\0')
	{	
		write(1, &str_1[i], 1);
		i++;
	}

	return (0);
}
*/