#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char digit;

	if(nbr > 9)
		ft_putnbr(nbr / 10);
	digit = nbr % 10 + '0';
	write(1, &digit, 1);
}
int	main(int argc, char *argv[])
{
	int size = argc-1;
	(void) argv;
	ft_putnbr(size);
	write(1, "\n", 1);
}
