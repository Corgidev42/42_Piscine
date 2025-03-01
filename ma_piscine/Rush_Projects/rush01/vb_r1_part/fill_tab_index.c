/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tab_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+
 */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:17:15 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/15 09:55:08 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_babytoi(char c) { return (c - '0'); }

int	total_params(char *str) {
  int i;
  int total;

  total = 0;
  i = 0;
  while (str[i]) {
    while (!(str[i] < '9' && str[i] > '0')) {
      i++;
    }
    while (str[i] < '9' && str[i] > '0') {
      i++;
    }
    total++;
  }
  return (total);
}

int	*ft_str_to_list(char *str) {
  int i;
  int j;
  int *entry_tab;

  entry_tab = malloc(sizeof(int) * total_params(str));
  if (entry_tab == NULL)
    return (0);
  i = 0;
  j = 0;
  while (str[i]) {
    while (str[i] == ' ')
      i++;
    if (str[i] >= '0' && str[i] <= '9') {
      entry_tab[j++] = ft_babytoi(str[i]);
      while (str[i] >= '0' && str[i] <= '9')
        i++;
    } else
      i++;
  }
  return (entry_tab);
}

void	fill_tab_index(int tab[4][4], char *str) {
  int i;
  int j;
  int k;
  int *number_list;

  number_list = ft_str_to_list(str);
  k = 0;
  i = 0;
  while (i < 4) {
    j = 0;
    while (j < 4) {
      tab[i][j] = number_list[k];
      k++;
      j++;
    }
    i++;
  }
}

/* #include <stdio.h>

int	main(int argc, char *argv[])
{
        if(argc == 2)
        {
                int tab2[4][4];
                fill_tab_index(tab2, argv[1]);
                int i = 0;
                int j;
                while(i < 4)
                {
                        j = 0;
                        while(j < 4)
                        {
                                printf("%d", tab2[i][j]);
                                j++;
                        }
                        printf("\n");
                        i++;
                }
        }
}  */
