/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_sastantuah.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 06:55:36 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 08:26:40 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**reverse_sastantuah(int size)
{
	char	**tab;
	int		i;
	int		a;

	i = 0;
	tab = sastantua(size);
	while (tab[i] != NULL)
	{
		a = 0;
		while (tab[i][a] != '\0' && tab[i][a] == ' ')
			++a;
		if (tab[i][a] != '\0')
			tab[i][a] = 'I';
		while (tab[i][a] != '\0')
			++a;
		tab[i][a - 1] = 'I';
		++i;
	}
	--i;
	a = -1;
	while (tab[i][++a] != '\0')
		if (tab[i][a] == '*')
			tab[i][a] = 'I';
	return (tab);
}
