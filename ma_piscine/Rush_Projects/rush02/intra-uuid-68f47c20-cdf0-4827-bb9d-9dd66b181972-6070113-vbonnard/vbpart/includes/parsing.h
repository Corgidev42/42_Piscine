/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:02:47 by vincent           #+#    #+#             */
/*   Updated: 2024/09/22 17:56:02 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# define BUFFER_SIZE 4096

# include <stdlib.h>

// Structure pour stocker les entrées du dictionnaire
typedef struct s_dict_entry
{
	char	*number;
	char	*text;
}	t_dict_entry;

// Déclaration des variables globales
extern t_dict_entry	*g_dict;
extern int			g_dict_index;

// Prototypes des fonctions
int		ft_count_lines(char *filename);
char	*ft_delete_space(char *str);
int		ft_read_file(char *filename, char *buffer);
void	ft_read_line(char *line, int line_count);
void	ft_parse_lines(char *buffer, int line_count);
void	ft_store_entry(char *number, char *text, int line_count);

#endif
