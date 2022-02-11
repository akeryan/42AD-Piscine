/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:54:32 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/20 18:27:45 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		r;
	int		*arr;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	r = max - min;
	arr = (int *)malloc(sizeof(int) * r);
	if (!arrL)
		return (0);
	while (i < r)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	if (i < 0)
		return (-1);
	return (i);
}
