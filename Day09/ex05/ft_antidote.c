/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:49:07 by juspende          #+#    #+#             */
/*   Updated: 2017/07/14 11:04:42 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (i == j || i == k || (i > j && i < k) || (i < j && k < i))
		return (i);
	else if (k == j || k == i || (k > j && k < i) || (k < j && k > i))
		return (k);
	else
		return (j);
}