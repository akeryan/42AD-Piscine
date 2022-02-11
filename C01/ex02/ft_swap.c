/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:27:57 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/06 15:42:44 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;

	printf("%d  ", a);
	printf("%d\n", b);
	ft_swap(&a, &b);	
	printf("%d  ", a);
	printf("%d  ", b);
	return (0);
}

void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
