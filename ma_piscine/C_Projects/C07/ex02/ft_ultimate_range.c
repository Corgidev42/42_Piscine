/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:35:31 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/12 10:55:31 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int		*tab = NULL;
		int		i = 0;
		int		min = atoi (argv[1]);
		int		max = atoi(argv[2]);
		int		size = ft_ultimate_range(&tab, min, max);
		
		if (size == -1)
			printf("erreur d'allocation");
		else
		{
			while (i < size)
			{
				printf("%d\n", tab[i]);
				i++;
			}
			free(tab);
		}
	}

	return (0);
}
*/