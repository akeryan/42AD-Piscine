/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 17:35:34 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/08 17:40:20 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int list[5];
	int i;

	i = 0;
	list[0] = 5;
	list[1] = -3;
	list[2] = 9;
	list[3] = 0;
	list[4] = -6;
	ft_sort_int_tab(list, 5);
	write(1, "\n", 1);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", list[i]);
		i++;
	}
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int flag;
	int i;
	int a;
	int b;

	flag = 1;
	while (flag == 1)
	{
		i = 0;
		flag = 0;
		while (i < size - 1)
		{
			a = *(tab + i);
			b = *(tab + i + 1);
			if (a > b)
			{
				*(tab + i) = b;
				*(tab + i + 1) = a;
				flag = 1;
			}
			i++;
		}
	}
}
