/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 17:55:49 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/06 18:16:08 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = -7;
	b = 4;


	printf("%d\n", a);
	printf("%d\n", b);

	ft_div_mod(a, b, &div, &mod);

	printf("%d\n", div);
	printf("%d\n", mod);

	return (0);
}

