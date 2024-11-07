#include <unistd.h>


int	str_len(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i = str_len(argv[1]);
		while(i >= 0)
		{
			write(1, &argv[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
}