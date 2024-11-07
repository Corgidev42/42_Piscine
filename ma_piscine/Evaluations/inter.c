#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i = 0;
	char *str1 = argv[1];
	char *str2 = argv[2];
	char seen[256] = {0}; // Tableau pour suivre les caractères vus
	int	size = argc - 1;

	// Vérifie si le nombre d'arguments est correct
	if (size == 2)
	{
		// Parcourt la deuxième chaîne de caractères
		while(str2[i])
		{
			// Marque les caractères de str2 comme vus
			if(seen[(int) str2[i]] == 0)
				seen[(int) str2[i]] = 1;
			i++;
		}
		i = 0;
		// Parcourt la première chaîne de caractères
		while (str1[i])
		{
			// Si le caractère de str1 a été vu dans str2, l'affiche
			if(seen[(int) str1[i]] == 1)
			{
				seen[(int) str1[i]] = 2; // Marque le caractère comme déjà affiché
				write(1, &str1[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1); // Ajoute une nouvelle ligne à la fin
}
