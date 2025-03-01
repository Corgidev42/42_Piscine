/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:19:02 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/11 12:19:10 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*liste;
	int	i;

	i = 0;
	liste = malloc(sizeof(int) * (max - min));
	if (liste == NULL)
		return (0);
	if (min >= max)
		return (0);
	while (min < max)
	{
		liste[i] = min;
		i++;
		min++;
	}
	return (liste);
}

/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int		min = atoi(argv[1]);
		int 	i = 0;
		int		max = atoi(argv[2]);
		int		*nb_liste = ft_range(atoi(argv[1]), atoi(argv[2]));
		while (i < max - min)
		{
			printf("%d\n", nb_liste[i]);
			i++;
		}
		free(nb_liste);
	}
	return (0);
}
*/
