#include <unistd.h>

// Fonction qui convertit tous les caractères d'une chaîne en minuscules
char *str_low_case(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z') // Si le caractère est une majuscule
			str[i] += 32; // Convertir en minuscule
		i++;
	}
	return str;
}

// Fonction qui retourne la longueur d'une chaîne de caractères
int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return len;
}

// Fonction qui capitalise le premier caractère de chaque mot dans une chaîne
char *str_capitalizer(char *str)
{
	int i = 0;
	int in_word = 0; // Indicateur pour savoir si on est dans un mot
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t') // Si le caractère n'est pas un espace ou une tabulation
		{
			if (in_word == 0) // Si on commence un nouveau mot
			{
				if (str[i] >= 'a' && str[i] <= 'z') // Si le caractère est une minuscule
					str[i] -= 32; // Convertir en majuscule
				in_word = 1; // On est maintenant dans un mot
			}
		}
		else
			in_word = 0; // On n'est plus dans un mot
		i++;
	}
	return str;
}

// Fonction principale
int main(int argc, char *argv[])
{
	int size = argc - 1; // Nombre d'arguments passés au programme
	if (size >= 1)
	{
		int i = 1;
		while (argv[i])
		{
			argv[i] = str_low_case(argv[i]); // Convertir l'argument en minuscules
			argv[i] = str_capitalizer(argv[i]); // Capitaliser le premier caractère de chaque mot
			write(1, argv[i], ft_strlen(argv[i])); // Écrire l'argument modifié sur la sortie standard
			write(1, "\n", 1); // Écrire un saut de ligne
			i++;
		}
	}
	else
		write(1, "\n", 1); // Si aucun argument n'est passé, écrire juste un saut de ligne
}
