/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carre.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 05:30:23 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 06:35:15 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**rectangle(int x, int y)
{
	int		i;
	int		a;
	char	**rectangle;

	i = 0;
	if ((rectangle = malloc(sizeof(char *) * (y + 1))) == NULL)
		return (NULL);
	while (i < y)
	{
		a = 0;
		if ((rectangle[i] = malloc(sizeof(char) * (x + 1))) == NULL)
			return (NULL);
		while (a < x)
			rectangle[i][a++] = '&';
		rectangle[i][a] = '\0';
		++i;
	}
	rectangle[i] = NULL;
	return (rectangle);
}
