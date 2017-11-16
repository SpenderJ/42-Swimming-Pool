/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:10:42 by juspende          #+#    #+#             */
/*   Updated: 2017/07/09 21:31:40 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		res;

	i = 1;
	res = 1;
	if (nb >= 13 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i < nb)
		res = ++i * res;
	return (res);
}
