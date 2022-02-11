/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 23:12:49 by akeryan           #+#    #+#             */
/*   Updated: 2021/08/21 06:54:03 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int half;
	int t;

	if (nb <= 1)
		return (0);
	if(nb == 2 || nb == 3)
		return (1);
	if ((nb % 2) == 0 || (nb % 3) == 0)
		return (0);
	t = 5;
	half = nb/2;
	while (t <= half)
	{
		if (nb % t == 0 || nb % (t + 2) == 0)
			return (0);
		t += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	if (nb <= 2)
		return (2);
	i = nb;
	if (i  % 2 == 0)
		i++;
	while (ft_is_prime(i) == 0)
		i += 2;
	return (i);
}
