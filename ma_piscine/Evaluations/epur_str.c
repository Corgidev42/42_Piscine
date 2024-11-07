#include <unistd.h>

int main(int argc, char *argv[])
{
	int size = argc - 1;
	char *str = argv[1];

	if (size == 1)
	{
		int i = 0;
		int first_word = 1; // Variable pour savoir si c'est le premier mot

		while (str[i])
		{
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			if (str[i] == '\0')
				break;
			// Afficher le mot
			if (!first_word)
				write(1, " ", 1); // Affiche un espace avant chaque mot, sauf le premier
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			{
				write(1, &str[i], 1);
				i++;
			}
			first_word = 0; // On a affiché le premier mot
		}
	}
	write(1, "\n", 1); // Afficher le saut de ligne à la fin
	return 0;
}
