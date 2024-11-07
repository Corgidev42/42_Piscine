/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 16:16:51 by angavrel          #+#    #+#             */
/*   Updated: 2024/09/20 10:53:41 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_union(char *s1, char *s2)
{
    int i = 0;
    char seen[256] = {0};  // Tableau pour suivre les caractères déjà vus
    while (s1[i])
    {
        if (!seen[(unsigned char)s1[i]])  // Si le caractère n'a pas été vu
        {
            write(1, &s1[i], 1);
            seen[(unsigned char)s1[i]] = 1; // Marque le caractère comme vu
        }
        i++;
    }
    i = 0;
    while (s2[i])
    {
        if (!seen[(unsigned char)s2[i]])  // Si le caractère n'a pas été vu
        {
            write(1, &s2[i], 1);
            seen[(unsigned char)s2[i]] = 1; // Marque le caractère comme vu
        }
        i++;
    }
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
