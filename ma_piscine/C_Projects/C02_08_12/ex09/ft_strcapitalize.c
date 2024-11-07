/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:58:30 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/10 14:29:26 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alphanumeric(char c)
{
		if ((c >= 'A' && c <= 'Z') 
			|| (c >= 'a' && c <= 'z') 
				|| (c  >= '0' && c <= '9'))
			return (1);
		else
			return (0);
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int first_carac_is_alpha;
	
	i = 0;
	first_carac_is_alpha = 0;
	ft_strlowcase(str);
	while(str[i])
	{
		if(first_carac_is_alpha == 0)
			str[i] -= 32;
		if (ft_str_is_alphanumeric(str[i]) == 0 && ft_str_is_alphanumeric(str[i + 1]) == 1)
			first_carac_is_alpha = 0;
		else
			first_carac_is_alpha = 1;
		i++;

	}
	return (str);
}
#include <stdio.h>

int	main(void)
{
	char str[] = "wow les.raviolis-c'est-super_bON+oMG ?!!!! apaj342]pl sfd33443 3423Dsfdsf 334d";
	printf("avant cap. : %s\n", str);
	printf("apres cap : %s", ft_strcapitalize(str));
	return 0;
}