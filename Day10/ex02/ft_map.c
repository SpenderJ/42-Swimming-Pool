/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 11:10:02 by juspende          #+#    #+#             */
/*   Updated: 2017/07/17 14:27:48 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*nbr;

	i = -1;
	if (!tab || length <= 0 || !f)
		return (NULL);
	if ((nbr = malloc(sizeof(int) * length)) == NULL)
		return (NULL);
	while (++i < length)
		nbr[i] = f(tab[i]);
	return (nbr);
}
