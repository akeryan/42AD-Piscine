/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 02:47:08 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/16 02:47:50 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int num;
	int i;

	num = 1;
	i = 0;
	while (num < argc)
	{
		while (argv[num][i] != '\0')
		{
			write(1, &argv[num][i], 1);
			i++;
		}
		write(1, "\n", 1);
		num++;
		i = 0;
	}
	return (0);
}
