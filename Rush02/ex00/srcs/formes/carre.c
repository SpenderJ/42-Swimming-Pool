/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carre.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 05:30:23 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 06:54:26 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**carre(int size)
{
	int		i;
	int		a;
	char	**carre;

	i = 0;
	if ((carre = malloc(sizeof(char *) * (size + 1))) == NULL)
		return (NULL);
	while (i < size)
	{
		a = 0;
		if ((carre[i] = malloc(sizeof(char) * (size + 1))) == NULL)
			return (NULL);
		while (a < size)
			carre[i][a++] = '&';
		carre[i][a] = '\0';
		++i;
	}
	carre[i] = NULL;
	return (carre);
}
