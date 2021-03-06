/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 10:15:24 by juspende          #+#    #+#             */
/*   Updated: 2017/07/09 11:01:09 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;
	int		res;

	i = 2;
	res = 0;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		res = nb % i;
		if (res == 0)
			return (0);
		i = i + 1;
	}
	return (1);
}
