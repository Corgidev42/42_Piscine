/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by f██████           #+#    #+#             */
/*   Updated: 2021/08/16 08:06:26 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		i = 0;
		while (argv[i])
			i++;
		while (i > 1)
		{
			write(1, argv[i - 1], ft_strlen(argv[i - 1]));
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
