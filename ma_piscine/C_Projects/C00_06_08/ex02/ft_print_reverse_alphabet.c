/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:16:28 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/04 16:33:01 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter > 'a' - 1)
	{
		write(1, &letter, 1);
		letter--;
	}
}

/*int     main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
