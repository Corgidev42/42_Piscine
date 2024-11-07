#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int size = argc - 1;
	char *str = argv[1];
	int first_word = 1;

	if (size == 1)
	{
		while (str[i])
		{
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			if (!str[i])
				break;
			if (!first_word)
				write(1, "   ", 3);
			while (str[i] != ' ' && str[i] != '\t' && str[i])
			{
				write(1, &str[i], 1);
				i++;
			}
			first_word = 0;
		}
	}

	write(1, "\n", 1);
}
