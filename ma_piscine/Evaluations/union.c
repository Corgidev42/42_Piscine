#include <unistd.h>

int	main (int argc, char *argv[])
{
	char *str1 = argv[1]; // Pointeur vers le premier argument
	char *str2 = argv[2]; // Pointeur vers le deuxième argument
	int i = 0; // Index pour parcourir les chaînes
	int seen[256] = {0}; // Tableau pour marquer les caractères déjà vus
	int	size = argc - 1; // Nombre d'arguments passés au programme

	if (size == 2) // Vérifie qu'il y a exactement deux arguments
	{
		// Parcourt la première chaîne de caractères
		while(str1[i])
		{
			// Si le caractère n'a pas encore été vu
			if (seen[(int) str1[i]] == 0)
			{
				seen[(int) str1[i]] = 1; // Marque le caractère comme vu
				write(1, &str1[i], 1); // Écrit le caractère sur la sortie standard
			}
			i++;
		}
		i = 0; // Réinitialise l'index pour la deuxième chaîne
		// Parcourt la deuxième chaîne de caractères
		while (str2[i])
		{
			// Si le caractère n'a pas encore été vu
			if (seen[(int) str2[i]] == 0)
			{
				seen[(int) str2[i]] = 1; // Marque le caractère comme vu
				write(1, &str2[i], 1); // Écrit le caractère sur la sortie standard
			}
			i++;
		}
	}
	write(1, "\n", 1); // Écrit un saut de ligne à la fin
}
