/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:08:00 by juspende          #+#    #+#             */
/*   Updated: 2017/07/14 14:22:07 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_unmatch(int *tab, int length)
{
	int		i;
	int		res;
	int		a;

	i = 0;
	a = 0;
	while (a < length)
	{
		res = tab[a];
		i = 0;
		while (i < length && res != -30071998)
		{
			if (tab[i] == res && i != a)
				res = -30071998;
			else
				++i;
			printf("EUh\n");
		}
		if (res != -30071998)
			return (res);
		++a;
	}
	return (res);
}
