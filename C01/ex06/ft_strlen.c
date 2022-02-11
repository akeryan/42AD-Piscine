/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:56:10 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/08 11:04:03 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int	main(void)
{
	char *str;
	
	*str = "Aram";
	printf("%d\n", ft_strlen(str));
	return (0);
}

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*str != 0)
	{
		str++;
		n++;
	}
	return (n);
}
