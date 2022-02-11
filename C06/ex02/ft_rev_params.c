/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 03:06:27 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/16 03:07:14 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int pos;
	int i;

	pos = argc - 1;
	i = 0;
	while (pos > 0)
	{
		while (argv[pos][i] != '\0')
		{
			write(1, &argv[pos][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		pos--;
	}
	return (0);
}
