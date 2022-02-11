/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:23:46 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/07 21:23:17 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		check_input(int x, int y);

void	rush(int x, int y)
{
	int i;
	int j;

	if (check_input(x, y) == 1)
	{
		i = 0;
		j = 0;
		while (++i <= y)
		{
			while (++j <= x)
			{
				if ((j == 1 && i == 1) || (j == x && i == y && y > 1 && x > 1))
					ft_putchar('/');
				else if ((j == x && i == 1) || (j == 1 && i == y))
					ft_putchar('\\');
				else if (j == 1 || j == x || i == 1 || i == y)
					ft_putchar('*');
				else
					ft_putchar(' ');
			}
			ft_putchar('\n');
			j = 0;
		}
	}
}

int		check_input(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "X AND Y MUST BE GREATER THAN 0!\n", 32);
		return (0);
	}
	else
		return (1);
}
