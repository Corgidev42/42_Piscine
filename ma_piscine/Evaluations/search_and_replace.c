#include <unistd.h>
#include <stdlib.h>

int	str_len(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int	 i =0;
		if (str_len(argv[2]) != 1 || str_len(argv[3]) != 1)
		{
			write(1, "\n", 1);
			exit(0);
		}
		else if ((argv[2][0] < 'a' || argv[2][0] > 'z' ) && (argv[2][0] < 'A' || argv[2][0] > 'Z'))
		{
			write(1, "\n", 1);
			exit(0);
		}
		else if ((argv[3][0] < 'a' || argv[3][0] > 'z') && ( argv[3][0] < 'A' || argv[3][0] > 'Z'))
		{
			write(1, "\n", 1);
			exit(0);
		}
		while(argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
			{
				argv[1][i] = argv[3][0];
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}