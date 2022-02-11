/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 01:03:13 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/20 23:42:10 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0 || nb == 1)
		return (1);
	result = nb;
	while (--power > 0)
		result *= nb;
	return (result);
}
