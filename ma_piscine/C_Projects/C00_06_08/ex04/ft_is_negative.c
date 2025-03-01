/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+
 */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:46:20 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/04 16:35:31 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n) {
  char negative;
  char positive;

  negative = 'N';
  positive = 'P';
  if (n < 0)
    write(1, &negative, 1);
  else
    write(1, &positive, 1);
}

/*int     main(void)
{
    ft_is_negative(0);
    return (0);
}
*/
