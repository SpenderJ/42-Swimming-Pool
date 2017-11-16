/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   losange_inverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 13:42:23 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 13:53:32 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		**losange_inverse(int size)
{
	int		i;
	int		a;
	char	**losange_reverse;

	i = 0;
	a = 0;
	losange_reverse = losange(size);
	while (losange_reverse[a] != NULL)
	{
		i = 0;
		while (losange_reverse[a][i] != '\0' && losange_reverse[a][i] == ' ')
			++i;
		if (losange_reverse[a][i] != '\0')
			losange_reverse[a][i] = 'I';
		while (losange_reverse[a][i] != '\0')
			++i;
		losange_reverse[a][i - 1] = 'I';
		++a;
	}
	return (losange_reverse);
}
