/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+
 */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:11:53 by vincent           #+#    #+#             */
/*   Updated: 2024/09/22 18:21:51 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cast.h"
#include "../includes/parsing.h"
#include <unistd.h>

int	main(int argc, char *argv[]) {
  char *dictionary_file;
  char buffer[BUFFER_SIZE];
  int line_count;
  char *number_to_convert;
  int i;

  if (argc == 2) {
    dictionary_file = "numbers.dict";
    number_to_convert = argv[1];
  } else if (argc == 3) {
    dictionary_file = argv[1];
    number_to_convert = argv[2];
  } else {
    write(1, "Usage: ./rush-02 [<dictionary_file>] <number>\n", 46);
    return (1);
  }
  line_count = ft_count_lines(dictionary_file);
  if (line_count == -1)
    return (1);
  if (ft_read_file(dictionary_file, buffer) != 0)
    return (1);
  ft_parse_lines(buffer, line_count);
  ft_find_in_dict(number_to_convert);
  i = 0;
  while (i < g_dict_index) {
    free(g_dict[i].text);
    free(g_dict[i].number);
    i++;
  }
  free(g_dict);
  return (0);
}
