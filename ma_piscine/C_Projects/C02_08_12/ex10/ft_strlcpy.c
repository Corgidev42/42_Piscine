/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:49:07 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/16 18:49:10 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0 )
		return (ft_strlen(src));
	if (size > 0)
	{
		while(i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (i);

}
#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "Hello, world!";
	char dest[13];

	unsigned int len;

	len = ft_strlcpy(dest, src, sizeof(dest));
	printf("Destination: %s\n", dest);
	printf("Longueur source: %u\n", len);

	return 0;
}
