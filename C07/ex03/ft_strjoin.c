/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:40:07 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/25 14:02:56 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		calc_size(int size, char **strs, char *sep)
{
	int i;
	int j;
	int mem_size;

	i = 0;
	j = 0;
	mem_size = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
			j++;
		mem_size += --j;
		i++;
		j = 0;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	mem_size += --i * (size - 1);
	mem_size++;
	return (mem_size);
}

char	*concat(int size, char **strs, char *sep, char *dest)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
			dest[k++] = strs[i][j++];
		j = 0;
		i++;
		if (i < size)
			while (sep[j] != '\0')
				dest[k++] = sep[j++];
		j = 0;
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		mem_size;
	char	*dest;

	if (size == 0)
	{
		dest = (char*)malloc(sizeof(""));
		return (dest);
	}
	mem_size = calc_size(size, strs, sep);
	dest = (char*)malloc(sizeof(*dest) * mem_size);
	if (!dest)
		return (0);
	dest = concat(size, strs, sep, dest);
	return (dest);
}
