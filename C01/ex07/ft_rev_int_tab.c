/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:19:39 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/08 20:15:14 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int size = 4;
	int array[size];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;

	ft_rev_int_tab(array, size);

	int i;
	i = 0;
	while(i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int n;
	int p;

	n = 0;
	p = size - 1;
	while (n < size / 2)
	{
		temp = *(tab + n);
		*(tab + n) = *(tab + p - n);
		*(tab + p - n) = temp;
		n++;
	}
}
