/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main (copy).c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:11:53 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/22 15:39:10 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include <unistd.h>
 char    *lookup_word(char* number);
void    convert_to_words(char* number);

char	*ft_strncpy(char *dest, char *src, int n)
{
	int		i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


int main(int argc, char **argv)
{
	char *dictionary_file = "numbers.dict";  // Dictionnaire par défaut
	char buffer[BUFFER_SIZE];
	int line_count;

	// Gestion des arguments
	if (argc == 2) {
	// Un seul argument : valeur à convertir, utiliser le dictionnaire par défaut
		dictionary_file = "numbers.dict";
	}
	else if (argc == 3) {
	// Deux arguments : premier = dictionnaire, deuxième = nombre
		dictionary_file = argv[1];
	}
	else {
		write(1, "Usage: ./rush-02 [<dictionary_file>] <number>\n", 46);
		return (1);
	}

	// Compter les lignes du fichier dictionnaire
	line_count = ft_count_lines(dictionary_file);
	if (line_count == -1)
		return (1);  // Erreur lors de la lecture

	// Lire le fichier dictionnaire
	if (ft_read_file(dictionary_file, buffer) != 0)
		return (1);  // Erreur lors de la lecture

	// Remplir le dictionnaire
	ft_parse_lines(buffer, line_count);

	// Rechercher le nombre à convertir (dernier argument)
	char *number_to_convert = (argc == 2) ? argv[1] : argv[2];
	for (int i = 0; i < dict_index; i++) {
		if (ft_strcmp(dict[i].number, number_to_convert) == 0) {
			write(1, dict[i].text, ft_strlen(dict[i].text));
			write(1, "\n", 1);
			break;
		}
		 else
	        convert_to_words(argv[1]);
			break;
	}
	return (0);
}
// lookup the word in dictionary with the number
 char    *lookup_words(char* number)
 {
     char    *word;
     int     i;
 
     i = 0;
     while (i < dict_index)
     {
         if (ft_strcmp(dict[i].number, number) == 0)
         {
             word = dict[i].text;
         }
         i++;
    }
	return (word);
}

void    convert_to_words(char* number)
 {
	char	*first;
     char    *word;
     int     len = ft_strlen(number);
while (len > 0)
{
//under 1000
     if (len % 3 == 0)
     {
		first = ft_strncpy(first, number, 1);
		 word = lookup_words(first);
		 if (*word != '\0')
		{
			write(1, " ", 1);
			write(1, word, ft_strlen(word));
		}
         word = lookup_words("100");
         if (*word != '\0')
         {
             write(1, " ", 1);
             write(1, word, ft_strlen(word));
         }
         number = number + 1;
		len = len - 1;
     }

 // case 20 30 ... 90
     if ((len % 3 == 2) && number[0] != '1' && number[0] != '0')
     {
		first = ft_strncpy(first, number, 1);
		first[1] = '0';
         word = lookup_words(first);
         if (*word != '\0')
         {
             write(1, " ", 1);
             write(1, word, ft_strlen(word));  //twenty -
         }
         number = number + 1;
		len = len - 1;
     }
 // case 1 .. 9
     if (len % 3 == 1)
     {
         word = lookup_words(number);
         if (*word != '\0')
         {
             write(1, " ", 1);
             write(1, word, ft_strlen(word));
         }
		number = number + 1;
		len = len - 1;
     }
}
} 




/*	// Libérer la mémoire
	for (int i = 0; i < dict_index; i++) {
		free(dict[i].text);
		free(dict[i].number);
	}
	free(dict);
*/
