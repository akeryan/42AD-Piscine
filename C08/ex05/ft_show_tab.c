/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 04:16:12 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/22 23:09:19 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		c = nb % 10 + '0';
		ft_putnbr(nb / 10);
		write(1, &c, 1);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while ((par + i)->str != 0)
	{
		ft_putstr((par + i)->str);
		ft_putstr("\n");
		ft_putnbr((par + i)->size);
		ft_putstr("\n");
		ft_putstr((par + i)->copy);
		ft_putstr("\n");
		i++;
	}
}
