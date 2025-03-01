/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+
 */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:11:53 by vincent           #+#    #+#             */
/*   Updated: 2024/09/22 17:50:57 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cast.h"
#include "../includes/parsing.h"
#include <unistd.h>

int	main(int argc, char *argv[]) {
  char *dictionary_file = "numbers.dict"; // Dictionnaire par défaut
  char buffer[BUFFER_SIZE];
  int line_count;
  char *number_to_convert;
  int i;

  // Gestion des arguments
  if (argc == 2) {
    // Un seul argument : valeur à convertir, utiliser le dictionnaire par
    // défaut
    dictionary_file = "numbers.dict";
    number_to_convert = argv[1];
  } else if (argc == 3) {
    // Deux arguments : premier = dictionnaire, deuxième = nombre
    dictionary_file = argv[1];
    number_to_convert = argv[2];
  } else {
    write(1, "Usage: ./rush-02 [<dictionary_file>] <number>\n", 46);
    return (1);
  }

  // Compter les lignes du fichier dictionnaire
  line_count = ft_count_lines(dictionary_file);
  if (line_count == -1)
    return (1); // Erreur lors de la lecture

  // Lire le fichier dictionnaire
  if (ft_read_file(dictionary_file, buffer) != 0)
    return (1); // Erreur lors de la lecture

  // Remplir le dictionnaire
  ft_parse_lines(buffer, line_count);

  // Libérer la mémoire
  i = 0;
  while (i < g_dict_index) {
    free(g_dict[i].text);
    free(g_dict[i].number);
    i++;
  }
  free(g_dict);

  return (0);
}
