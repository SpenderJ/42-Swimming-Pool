/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carre.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 05:30:23 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 06:42:44 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**triangle(int base)
{
	int		i;
	char	**triangle;
	int		espace;
	int		n;
	int		nb;

	espace = (base / 2) + 1;
	i = 0;
	nb = 1;
	if (base % 2 == 0 || (triangle = malloc(sizeof(char *) * (base))) == NULL)
		return (NULL);
	while (espace-- > 0 && (n = 0) != 1)
	{
		if ((triangle[i] = malloc(sizeof(char) * (base + 1))) == NULL)
			return (NULL);
		while (n <= espace)
			triangle[i][n++] = ' ';
		n = 0;
		while (n < nb)
			triangle[i][espace + n++] = '&';
		triangle[i++][espace + n] = '\0';
		nb = nb + 2;
	}
	triangle[i] = NULL;
	return (triangle);
}
