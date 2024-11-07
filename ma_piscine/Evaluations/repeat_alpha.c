#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i = 0;
		int diff = 0;
		while(argv[1][i])
		{
			char c = argv[1][i];
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				diff = c - 'A' + 1;
				while(diff > 0)
				{
					write(1, &argv[1][i], 1);
					diff--;
				}
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				diff = c - 'a' + 1;
				while(diff > 0)
				{
					write(1, &argv[1][i], 1);
					diff--;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
}