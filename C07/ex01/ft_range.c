/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 05:23:26 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/20 13:08:04 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int n;
	int *array;

	if (min >= max)
		return (0);
	n = max - min;
	i = 0;
	if (!(array = (int*)malloc(sizeof(*array) * n)))
		return (0);
	while (i < n)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
