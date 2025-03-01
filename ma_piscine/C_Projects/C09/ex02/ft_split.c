/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:39:25 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/18 18:41:30 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_word(char *str, char *charset)
{
	int	words;
	int	in_words;

	words = 0;
	in_words = 0;
	while (*str)
	{
		if (ft_str_is_charset(*str, charset))
			in_words = 0;
		else if ((!in_words))
		{
			in_words = 1;
			words++;
		}
		str++;
	}
	return (words);
}

int	*ft_len_word(char *str, char *charset, int *len_list)
{
	int	i;
	int	word_len;
	int	j;

	j = 0;
	i = 0;
	word_len = 0;
	while (str[i])
	{
		if (ft_str_is_charset(str[i], charset))
		{
			if (word_len > 0)
			{
				len_list[j] = word_len;
				word_len = 0;
				j++;
			}
		}
		else
			word_len++;
		i++;
	}
	if (word_len > 0)
		len_list[j] = word_len;
	return (len_list);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

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

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**split_tab;
	int		*len_list;
	char	*current_pos;

	current_pos = str;
	len_list = malloc(sizeof (int) * ft_count_word(str, charset));
	split_tab = malloc(sizeof (char *) * ft_count_word(str, charset) + 1);
	len_list = ft_len_word(str, charset, len_list);
	if (len_list == NULL || split_tab == NULL)
		return (0);
	i = 0;
	while (i < ft_count_word(str, charset))
	{
		while (ft_str_is_charset(*current_pos, charset))
			current_pos ++;
		split_tab[i] = malloc(sizeof (char *) * len_list[i]);
		if (split_tab[i] == NULL)
			return (0);
		split_tab[i] = ft_strncpy(split_tab[i], current_pos, len_list[i]);
		current_pos += len_list[i];
		i++;
	}
	split_tab[i] = "\0";
	return (split_tab);
}

/* 	int	main(int argc, char *argv[])
{


	if (argc == 3)
	{
		char **tab;
		int	i = 0;
		int	*len_list;
		char *str = argv[1];
		char *charset = argv[2];
		len_list = malloc(sizeof(int) * ft_count_word(str,charset));
		if (len_list == NULL)
			return (0);
		len_list = ft_len_word(str,charset, len_list);
		printf("nombre de mots : %d\n\n", ft_count_word(str, charset));
		for(int i= 0 ; i < ft_count_word(str,charset) ; i++)
			printf("nb%d : %d\n",i, len_list[i]);
		tab = ft_split(str,charset);
		printf("\n");
		while(i < ft_count_word(str,charset))
		{
			printf("'%s'\n", tab[i]);
			free(tab[i]);
			i++;
		}
		free(len_list);
		free(tab);
	}
	return (0);
} */
