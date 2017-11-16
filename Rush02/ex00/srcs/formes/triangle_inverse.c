/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle_inverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 08:50:22 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 09:10:03 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**triangle_inverse(int size)
{
	int		i;
	int		n;
	char	**reverse_triangle;

	i = 0;
	reverse_triangle = triangle(size);
	while (reverse_triangle[i] != NULL)
	{
		n = 0;
		while (reverse_triangle[i][n] != '\0' && reverse_triangle[i][n] == ' ')
			++n;
		if (reverse_triangle[i][n] != '\0')
			reverse_triangle[i][n] = 'I';
		while (reverse_triangle[i][n] != '\0')
			++n;
		if (reverse_triangle[i][n] == '\0')
			reverse_triangle[i][n - 1] = 'I';
		++i;
	}
	--i;
	n = 0;
	while (reverse_triangle[i][n] != '\0')
		reverse_triangle[i][n++] = 'I';
	return (reverse_triangle);
}
