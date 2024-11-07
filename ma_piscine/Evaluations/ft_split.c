#include <stdlib.h>
#include <stdio.h>

// Fonction pour compter le nombre de mots dans une chaîne de caractères
int count_words(char *str)
{
	int i = 0;
	int in_words = 0;
	int nb_words = 0;
	while (str[i])
	{
		// Si le caractère n'est pas un espace ou une tabulation
		if (str[i] != ' ' && str[i] != '\t')
		{
			// Si on n'était pas déjà dans un mot, on compte un nouveau mot
			if (in_words == 0)
			{
				nb_words++;
				in_words = 1;
			}
		}
		else
			in_words = 0; // On n'est plus dans un mot
		i++;
	}
	return nb_words; // Retourne le nombre de mots
}

// Fonction pour vérifier si un caractère fait partie du charset (espace ou tabulation)
int c_is_charset(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	else
		return 0;
}

// Fonction pour obtenir la longueur de chaque mot dans une chaîne de caractères
int *ft_strlen_words(char *str)
{
	int i = 0;
	int j = 0;
	int word_len = 0;
	int *list_len_words = malloc(sizeof(int) * count_words(str)); // Allocation dynamique pour stocker les longueurs des mots
	while (str[i])
	{
		if (c_is_charset(str[i]))
		{
			if (word_len > 0)
			{
				list_len_words[j] = word_len; // Stocke la longueur du mot
				word_len = 0;
				j++;
			}
		}
		else
			word_len++; // Incrémente la longueur du mot
		i++;
	}
	if (word_len > 0)
		list_len_words[j] = word_len; // Stocke la longueur du dernier mot
	return list_len_words; // Retourne la liste des longueurs des mots
}

// Fonction pour copier n caractères d'une chaîne source vers une chaîne destination
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char **ft_split(char *str)
{
	int word_count = count_words(str);
	char **split_tab = malloc(sizeof(char *) * (word_count + 1));
	int *list_len_words = ft_strlen_words(str);
	char *current_pos = str;
	if (split_tab == NULL || list_len_words == NULL)
		return 0;
	int i = 0;
	while (i < word_count)
	{
		while (c_is_charset(*current_pos))
			current_pos++;
		split_tab[i] = malloc(sizeof(char) * list_len_words[i]);
		if (split_tab[i] == NULL)
			return 0;
		split_tab[i] = ft_strncpy(split_tab[i], current_pos, list_len_words[i]);
		current_pos += list_len_words[i];
		i++;
	}
	split_tab[word_count + 1] = "\0";
	return split_tab;
}
int main()
{
	char str[] = "Hello   world\tthis is a  \t  test   ";
	char **result = ft_split(str);
	int i = 0;

	while (result[i] != NULL)
	{
		printf("Word %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return 0;
}
