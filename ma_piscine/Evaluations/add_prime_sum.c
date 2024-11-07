#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int ft_is_prime(int nbr)
{
	if (nbr <= 1)
		return 0;
	int i = 2;
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
			return 0;
		i++;
	}
	return 1;
}

void	putnbr(int nbr)
{
	char	digit;

	if (nbr > 9)
		putnbr(nbr / 10);
	digit = nbr % 10 + '0';
	write(1, &digit, 1);
}

int main(int argc, char *argv[])
{
	int size = argc - 1;
	int sum = 0;
	if (size == 1)
	{
		int nbr = ft_atoi(argv[1]);
		int i = 2;
		while (i <= nbr)
		{
			if (ft_is_prime(i))
				sum += i;
			i++;
		}
	}
	putnbr(sum);
	write(1, "\n", 1);
}
