/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+
 */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:43:16 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/04 16:29:13 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void) {
  char letter;

  letter = 'a';
  while (letter < 'z' + 1) {
    write(1, &letter, 1);
    letter++;
  }
}
