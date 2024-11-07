/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:29:48 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/22 11:59:53 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int		main(void)
{
	char dest[] = "Bonjour 42";
	char src[] = "Qui est tu toi ? Je v";

	max_charac = 24;
	
	*dest = *ft_strncpy(dest, src, max_charac);
	
	printf("dest :  %s \n", dest);

	unsigned int i = 0;

	while (i < max_charac)
	{
		printf("dest[%d] = %c\n",i, dest[i]);
		i++;
	}
	


	return (0);
}
*/
