/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 08:09:54 by fwuensche         #+#    #+#             */
/*   Updated: 2024/09/20 10:26:10 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		count_words(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		// move to the beggining of a new word
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			count++;
			// move to the next whitespace
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str)
{
	char *word;
	int	i;

	i = 0;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !ft_isspace(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char **arr = (char **)malloc(sizeof(char *) * (count_words(str) + 1));

	// same as count_words, except we save word to array instead of counting
	int i = 0;
	while (*str)
	{
		// move to the beggining of a new word
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			// save word to array
			arr[i] = malloc_word(str);
			i++;
			// move to the next whitespace
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	arr[i] = NULL;
	return (arr);
}

#include <stdio.h>

 int		main(int ac, char **av)
 {
 	char **arr;
	(void)av;
	(void)ac;
 	char *phrase = "   Hello,   Flavio\t Wuensche!  ";
 	arr = ft_split(phrase);
 	printf("%s\n", arr[0]);
 	printf("%s\n", arr[1]);
 	printf("%s\n", arr[2]);
 	printf("%s\n", arr[3]);
 }

/*
int ft_countline(char *str, char charset)
{
	int i = 0;
	int compt = 0;
	while(str[i])
	{
		if(str[i] == charset)
			compt++;
		i++;
	}
	return compt + 1;
}

char *ft_wordplace(char *str, int start, int end)
{
	char *chcar;
	int i;
	i = 0;
	chcar = malloc((end - start + 1) * sizeof(char *)); //idem
	while(start <= end)
	{
		chcar [i] = str[start];
		start++;
		i++;
	}
	chcar[i] = '\0';
	return chcar;
}

char **ft_split(char *str, char charset)
{
	int i;
	int end;
	int start;
	end = 0;
	start = 0;
	int y = 0;
	i = 0;

	char **tabc;
	tabc = malloc(ft_countline(str, charset) * sizeof(char *)); //on mul•
	if(tabc == NULL)
		return 0;
	while(str[i])
	{
		if(str[i] == charset)
		{
			end = i - 1;
			tabc[y] = ft_wordplace(str, start, end);
			y++;
			start = i + 1;
		}
		i++;
	}
	tabc[y] = ft_wordplace(str, start, i - 1); //on ajoute la derniere l
	y++;
	tabc[y] = NULL;
	return tabc;
}

#include <stdio.h>
int main(void)
{
	char *str = "  salut les amis";
	char **tabc;
	tabc = ft_split(str, ' ');
	int i = 0;
	while(tabc[i])
	{
		printf("%s\n", tabc[i]);
		i++;
	}
	i = 0;
	while(tabc[i])
	{
		free(tabc[i]);//on free chaque ligne
		i++;
	}
	free(tabc);//on free le tableau en lui meme
	return 0;
}*/
