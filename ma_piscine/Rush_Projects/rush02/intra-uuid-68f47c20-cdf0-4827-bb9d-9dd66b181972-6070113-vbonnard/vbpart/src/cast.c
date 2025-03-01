/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:33:45 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/22 18:09:43 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tools.h"
#include "../includes/parsing.h"
#include <unistd.h>

char	*ft_find_in_dict(char *number_to_convert)
{
	int	i;

	i = 0;
	while (i < g_dict_index)
	{
		if (ft_strcmp(g_dict[i].number, number_to_convert) == 0)
		{
			write(1, g_dict[i].text, ft_strlen(g_dict[i].text));
			write(1, "\n", 1);
		}
		i++;
	}
	return (NULL);
}
