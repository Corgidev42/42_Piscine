/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 16:28:43 by fwuensch          #+#    #+#             */
/*   Updated: 2024/09/20 10:53:04 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_inter(char *s1, char *s2)
{
    int i = 0;
    char seen[256] = {0};   // Tableau pour marquer les caractères déjà vus dans s1
    char in_s2[256] = {0};  // Tableau pour marquer les caractères présents dans s2
    while (s2[i])
    {
        in_s2[(unsigned char)s2[i]] = 1;
        i++;
    }
    i = 0;
    while (s1[i])
    {
        if (!seen[(unsigned char)s1[i]] && in_s2[(unsigned char)s1[i]])  // Si le caractère est dans les deux chaînes et pas encore vu
        {
            write(1, &s1[i], 1);
            seen[(unsigned char)s1[i]] = 1;  // Marque le caractère comme vu
        }
        i++;
    }
    write(1, "\n", 1);
}

int	main(int argc, char **argv) {
	if (argc == 3)
		solve(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}
