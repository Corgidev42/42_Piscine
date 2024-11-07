#include <unistd.h>
#include <limits.h>

void	ft_putnbr(int nbr)
{
	char digit;
	if (nbr == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	digit = nbr % 10 + '0';
	write(1, &digit, 1);
}
