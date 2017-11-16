/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carre_inverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 08:18:25 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 08:25:42 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		**carre_inverse(int size)
{
	int		i;
	int		n;
	char	**reverse_carre;

	i = 0;
	n = 0;
	reverse_carre = carre(size);
	while (reverse_carre[i] != NULL)
	{
		n = 0;
		while (reverse_carre[i][n] != '\0')
		{
			if (n == 0 || n == size - 1 || i == 0 || i == size - 1)
				reverse_carre[i][n] = 'I';
			++n;
		}
		++i;
	}
	return (reverse_carre);
}
