#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int i = 0;
	if (argc > 1)
	{
		while(argv[argc - 1][i])
		{
			ft_putchar(argv[argc - 1][i]);
			i++;
		}
	}	
	write(1, "\n", 1);
}




