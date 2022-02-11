/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 00:51:48 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/16 02:32:03 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//UNFINISHED
#include <unistd.h>
char *pos_to_binary(int nb)
{
	char *bin;


}


void to_binary(int a)
{
	int nb;
	char c;
	int is_negative;

	if (a < 0)
	{
		is_negative = 1;
		nb = (-1)*a;
	}
	else
	{	
		is_negative = 0;
		nb = a;
	}




}

void	ft_putnbr_base(int a)
{
	char c;

	if (a < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base(-a);
	}
	else if (a < 10)
	{
		c = a + '0';
		write(1, &c, 1);
	}
	else
	{
		c = a % 10 + '0';
		ft_putnbr_base(a / 10);
		write(1, &c, 1);
	}
}
