/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 00:03:40 by juspende          #+#    #+#             */
/*   Updated: 2017/07/14 00:36:23 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base <= 0)
		return (-1);
	if (base == 1)
		return (0);
	if (base % 2 == 0)
		base = base / 2;
	else
		base = (base * 3) + 1;
	return (1 + ft_collatz_conjecture(base));
}
