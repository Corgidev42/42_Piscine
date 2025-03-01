/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:06:31 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/12 19:45:42 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	sort_ascii(int size, char *argv[])
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	j;
	int	i;

	if (argc > 1)
	{
		sort_ascii(argc - 1, argv + 1);
	}
	i = 1;
	if (argc > 1)
	{
		j = 0;
		while (i < argc)
		{
			while (argv[i][j])
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			i++;
			j = 0;
			ft_putchar('\n');
		}
	}
	return (0);
}
