/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 04:00:02 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/22 22:18:32 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i++])
		;
	return (i - 1);
}

char		*ft_strcpy(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	char 		*ptr;
	t_stock_str	*arr;

	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	j = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		if (!(ptr = (char *)malloc(sizeof(char) * (arr[i].size + 1))))
			return (0);
		arr[i].copy = ft_strcpy(ptr, av[i]);
		i++;
	}
	arr[ac].str = 0;
	return (arr);
}
