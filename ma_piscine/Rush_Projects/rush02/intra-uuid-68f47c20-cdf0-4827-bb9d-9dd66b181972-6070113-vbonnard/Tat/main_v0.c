/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:59:32 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/21 17:23:25 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_number(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0); //only number
}

int	ft_atoi_positive(char *str)
{
	int		nb;
	int		i;

	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	number;
	int	reference;

// your program can take up to 2 arguments
	if (argc > 3 || argc == 1)
	{
		write(1, "Enter 1 or 2 numbers.\n", 22);
		return (1);
	}
// if there is only one argument, it is the value you need to convert
	else if (argc == 2)
	{
		if (check_number(argv[1]) != 0)
		{
			write(1, "Error\n", 6);
			return (1);
		}
		number = ft_atoi_positive(argv[1]);
		printf("%i\n", number);
	}
//if there are 2 arguments, the 1st is the new reference to dictionary
// and the 2nd is the value needed to convert
	else if (argc == 3)
	{
		if (check_number(argv[1]) != 0 || check_number(argv[2]) != 0)
		{
			write(1, "Error\n", 6);
			return (1);
		}		
		reference = ft_atoi_positive(argv[1]);
		printf("%i\n", reference);
		number = ft_atoi_positive(argv[2]);
		printf("%i\n", number);
	}
	return (0);
}

