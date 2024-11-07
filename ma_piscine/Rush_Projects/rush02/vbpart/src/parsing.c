/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:46:08 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/22 17:51:48 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "../includes/parsing.h"
#include "../includes/tools.h"

t_dict_entry	*g_dict = NULL;
int				g_dict_index = 0;

int	ft_count_lines(char *filename)
{
	int		file;
	int		nb_octet_read;
	char	buffer[BUFFER_SIZE];
	int		i;
	int		line_count;

	i = 0;
	line_count = 0;
	file = open(filename, O_RDONLY); // ouverture en lecture seul
	nb_octet_read = read(file, buffer, BUFFER_SIZE);
	if (file == -1)
	{
		write(1,"Dict error\n",11);
		return (1);
	}
	while(i < nb_octet_read)
	{
		if (buffer[i] == '\n')
			line_count++;
		i++;
	}
	close(file);
	if (buffer[nb_octet_read - 1] != '\n')
		line_count++;
	return (line_count);
}

char	*ft_delete_space(char *str)
{
	int	start;
	int	end;

	if (str == NULL || str[0] == '\0')
		return (str);
	start = 0;
	end = ft_strlen(str) - 1; // -1 pour '\0'
	while(str[start] == ' ')
		start++;
	while(end > start && str[end] == ' ') //je recule tant que je trouve des espaces
		end--;
	str[end + 1] = '\0'; //je termine la chaine apres le dernier carac non space
	return (&str[start]);

}

void	ft_store_entry(char *number, char *text, int line_count)
{
	if (g_dict == NULL)
	{
		g_dict = malloc(sizeof(t_dict_entry) * line_count); //changer la taille, pour linstant c un tab a 100 entree
		if (g_dict == NULL)
		{
			write(1, "Memory allocation error\n", 24);
			return;
		}
	}
	g_dict[g_dict_index].number = ft_strdup(number); // convertir le nombre en int
	g_dict[g_dict_index].text = ft_strdup(text); // dupliquer le text pour le save
	g_dict_index++;
}

/*
decouper la ligne en 2 partie : nombre et son texte
supprimes les espces en trop (au debut et a la fin)
stocker les informations dans le tableau de dictionnaire
 */
void ft_read_line(char *line, int line_count)
{
	int i = 0;
	char *number;
	char *text;

	// Trouver le caractère ':'
	while (line[i] != ':' && line[i] != '\0')
		i++;

	// Vérifier qu'on a bien trouvé un ':'
	if (line[i] == '\0')  // Si pas de ':', on ignore cette ligne
		return;

	// Terminer la première partie (le nombre)
	line[i] = '\0';  // On coupe la chaîne ici pour séparer le nombre du texte

	// Obtenir le nombre et le texte associés
	number = ft_delete_space(line);  // Supprimer les espaces autour du nombre
	text = ft_delete_space(line + i + 1);  // Supprimer les espaces autour du texte

	// Si la chaîne du nombre ou du texte est vide, on ne fait rien
	if (number[0] == '\0' || text[0] == '\0')
	{
		write(1, "Dict error\n", 11);
		return;
	}

	// Stocker l'entrée dans le dictionnaire
	ft_store_entry(number, text, line_count);
}

int	ft_read_file(char *filename, char *buffer)
{
	int	file;
	int	nb_octet_read;

	file = open(filename, O_RDONLY); // ouverture en lecture seul
	if (file == -1)
	{
		write(1,"Dict error\n",11);
		return (1);
	}

	nb_octet_read = read(file, buffer, BUFFER_SIZE - 1); // lecture dans la fichier
	if (nb_octet_read < 0)
	{
		write(1,"Dict error\n",11);
		return (1);
	}
	buffer[nb_octet_read] = '\0'; //on termine la chaine carac
	close(file);
	return (0);
}

/*
parcours le buffer jusqua trovuer un \n
call de parse_line pour chaque ligne afin de lanalyser et la stocker dans notre structure
 */
void	ft_parse_lines(char *buffer, int line_count)
{
	int i = 0;
	int	start = 0;
	while(buffer[i])
	{
		if (buffer[i] == '\n')
		{
			buffer[i] = '\0'; //on remplace les retour a la ligne par des fin de chaine
			ft_read_line(buffer + start, line_count); //traiter cette ligne
			start = i + 1;
		}
		i++;
	}
	//si derniere ligne est pas termipar un \n
	if (start < i)
		ft_read_line(buffer + start, line_count);
}
