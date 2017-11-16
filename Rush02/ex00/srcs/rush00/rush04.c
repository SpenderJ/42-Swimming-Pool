/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 10:02:33 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 09:04:47 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static int		center(int x, int y, char bordure, char **tab)
{
	int		i;
	int		a;

	i = 1;
	a = 1;
	while (i < y - 1)
	{
		if ((tab[i] = malloc(sizeof(char) * (x * y + 4))) == NULL)
			return (0);
		a = 0;
		tab[i][0] = bordure;
		while (++a < x - 1)
			tab[i][a] = ' ';
		if (x > 1)
			tab[i][a++] = bordure;
		tab[i][a] = '\0';
		i = i + 1;
	}
	return (0);
}

static char		*lowline(char coin2, int x, char bordure0, char coin3)
{
	int		i;
	char	*str;

	if ((str = malloc(sizeof(char) * (x + x))) == NULL)
		return (NULL);
	i = 0;
	str[0] = coin2;
	while (++i < x - 1)
		str[i] = bordure0;
	if (x > 1)
		str[i++] = coin3;
	str[i] = '\0';
	return (str);
}

char			**rush04(int x, int y)
{
	char	coin[4];
	char	bordure[2];
	int		i;
	char	**tab;

	if ((tab = malloc(sizeof(char *) * ((x + 1) * (y + 1)))) == NULL ||
			(tab[0] = malloc(sizeof(char) * (x + 1) * (y + 1))) == NULL)
		return (NULL);
	i = 0;
	bordure[0] = 'B';
	bordure[1] = 'B';
	coin[0] = 'A';
	coin[1] = 'C';
	coin[2] = 'C';
	coin[3] = 'A';
	tab[0][0] = coin[0];
	while (++i < x - 1)
		tab[0][i] = bordure[0];
	if (x > 1)
		tab[0][i++] = coin[1];
	tab[0][i] = '\0';
	if (center(x, y, bordure[1], tab) != 1 && y > 1)
		tab[y - 1] = lowline(coin[2], x, bordure[0], coin[3]);
	tab[y] = NULL;
	return (tab);
}
