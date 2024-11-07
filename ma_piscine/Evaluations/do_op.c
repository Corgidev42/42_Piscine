#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int nb1 = atoi(argv[1]);
		int nb2 = atoi(argv[3]);
		char op = argv[2][0];
		int result = 0;

		if (op == '+')
			result = nb1 + nb2;
		else if (op == '-')
			result = nb1 - nb2;
		else if (op == '*')
			result = nb1 * nb2;
		else if (op == '/' && nb2 != 0)
			result = nb1 / nb2;
		else if (op == '%' && nb2 != 0)
			result = nb1 % nb2;
		printf("%d\n", result);
	}
	else
	{
		write(1, "\n", 1);
	}
	return 0;
}
