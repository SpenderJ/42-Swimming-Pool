/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangle_inverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 08:27:21 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 08:43:29 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**rectangle_inverse(int x, int y)
{
	int		i;
	int		n;
	char	**reverse_rectangle;

	i = 0;
	reverse_rectangle = rectangle(x, y);
	while (reverse_rectangle[i] != NULL)
	{
		n = 0;
		while (reverse_rectangle[i][n] != '\0')
		{
			if (n == 0 || n == x - 1 || i == y - 1 || i == 0)
				reverse_rectangle[i][n] = 'I';
			++n;
		}
		++i;
	}
	return (reverse_rectangle);
}
