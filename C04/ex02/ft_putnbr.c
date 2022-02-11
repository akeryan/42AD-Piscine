/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 23:43:48 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/20 22:51:03 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
	else if (nb > 10)
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

int main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr(atoi(&argv[1][0]));
	write(1, "\n", 1);
	return (0);
}
