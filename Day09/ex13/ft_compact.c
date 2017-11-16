/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 09:58:34 by juspende          #+#    #+#             */
/*   Updated: 2017/07/14 16:07:40 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		swap_tab(char **tab, int i)
{
	int			a;
	char		*buffer;

	a = 0;
	buffer = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = buffer;
	return (0);
}

int		ft_compact(char **tab, int length)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (i < length)
		if (tab[i++] != NULL)
			res++;
	return (res);
}
