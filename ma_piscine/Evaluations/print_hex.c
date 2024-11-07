#include <unistd.h>

int ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return result;
}
void print_hex(int nbr)
{
	char *conv = "0123456789abcdef";
	if (nbr >= 16)
		print_hex(nbr / 16);
	write(1, &conv[nbr % 16], 1);
}

int main(int argc, char *argv[])
{
	int size = argc - 1;
	if (size == 1)
	{
		int nbr = ft_atoi(argv[1]);
		print_hex(nbr);
	}
	write(1, "\n", 1);
}
