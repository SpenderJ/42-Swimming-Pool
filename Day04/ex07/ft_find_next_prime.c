/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 10:29:18 by juspende          #+#    #+#             */
/*   Updated: 2017/07/09 21:33:56 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		i;
	int		res;
	int		a;

	i = 0;
	res = 0;
	a = 2;
	if (nb <= 2)
		return (2);
	while (42)
	{
		res = 0;
		a = 2;
		while (a < nb + i && res != -1)
		{
			res = (nb + i) % a;
			if (res == 0)
				res = -1;
			a = a + 1;
		}
		if (res != 0 && res != -1)
			return (nb + i);
		i = i + 1;
	}
	return (0);
}
