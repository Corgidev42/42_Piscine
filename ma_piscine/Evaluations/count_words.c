#include <unistd.h>

void putnbr(int nbr)
{
	char digit;

	if (nbr > 9)
		putnbr(nbr / 10);
	digit = nbr % 10 + '0';
	write(1, &digit, 1);
}

int main(int argc, char *argv[])
{
	int size = argc - 1;
	char *str = argv[1];

	if (size == 1)
	{
		int i = 0;
		int in_word = 0; // Variable pour savoir si c'est le premier mot
		int words = 0;
		while (str[i])
		{
			if (str[i] != ' ' && str[i] != '\t')
			{
				if (in_word == 0)
				{
					words++;	 // Comptabiliser un nouveau mot
					in_word = 1; // Nous sommes dans un mot
				}
			}
			else
				in_word = 0; // On sort du mot
			i++;
		}
		putnbr(words);
	}
	write(1, "\n", 1);
	return 0;
}
