/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:25:28 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/06 19:33:01 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *a/(*b);
	*b = temp%(*b);
}

int main(void)
{
	int a;
	int b;

	a = 7;
	b = 4;

	printf("%d\n", a);
	printf("%d\n", b);

	ft_ultimate_div_mod(&a, &b);

	printf("%d\n", a);
	printf("%d\n", b);

	return (0);
}
