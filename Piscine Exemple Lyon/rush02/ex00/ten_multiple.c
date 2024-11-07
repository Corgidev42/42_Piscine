/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ten_multiple.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2021/08/22 23:04:36 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include "rush02.h"

char	*ten_multiple(int n)
{
	char	*str;
	int		i;

	str = malloc((n + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '1';
	i = 1;
	while (i <= n)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
