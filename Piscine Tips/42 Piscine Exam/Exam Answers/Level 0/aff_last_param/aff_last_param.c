/*
#include <unistd.h>

int		main(int argc, char *argv[])
{
	int	i = -1;

	if (argc > 1)
	{
		while (argv[argc - 1][++i])
			write(1, &argv[argc - 1][i], 1);
	}
	write(1, "\n", 1);
	return (0);
}*/

// plus simple
#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc > 1)
    {
        // Déclarer le pointeur et l'initialiser pour qu'il pointe vers le dernier argument
        char *last_arg = argv[argc - 1];

        // Parcourir le dernier argument et afficher chaque caractère
        while (last_arg[i] != '\0') // Tant qu'on n'a pas atteint la fin de la chaîne
        {
            write(1, &last_arg[i], 1); // Afficher chaque caractère
            i++;
        }
    }
    
    // Toujours afficher un saut de ligne à la fin
    write(1, "\n", 1);
    
    return 0;
}