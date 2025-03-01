/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.fr>          +#+  +:+       +#+
 */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:13:56 by kmartine          #+#    #+#             */
/*   Updated: 2024/09/08 12:42:32 by ssaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ligne(int x) {
  int count;

  count = 0;
  ft_putchar('B');
  if (x > 1) {
    while (count < x - 2) {
      ft_putchar(' ');
      count++;
    }
    ft_putchar('B');
  }
  ft_putchar('\n');
}

void	pligne(int x) {
  int count;

  count = 0;
  ft_putchar('A');
  if (x > 1) {
    while (count < x - 2) {
      ft_putchar('B');
      count++;
    }
    ft_putchar('C');
  }
  ft_putchar('\n');
}

void	dligne(int x) {
  int count;

  count = 0;
  ft_putchar('A');
  if (x > 1) {
    while (count < x - 2) {
      ft_putchar('B');
      count++;
    }
    ft_putchar('C');
  }
  ft_putchar('\n');
}

void	rush(int x, int y) {
  int count;

  count = 0;
  if (y == 1) {
    pligne(x);
  } else if (y == 2) {
    pligne(x);
    dligne(x);
  } else if (y > 2) {
    pligne(x);
    while (count != y - 2) {
      ligne(x);
      count++;
    }
    dligne(x);
  }
}
