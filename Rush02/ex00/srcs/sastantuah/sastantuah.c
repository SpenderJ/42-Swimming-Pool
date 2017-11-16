/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantuah.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 01:44:48 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 21:53:01 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		ft_repeatchar(char c, int time, char *str)
{
	int		i;
	int		a;

	i = -1;
	a = -1;
	while (str[++a] != '\0')
		;
	while (++i < time)
		str[a++] = c;
}

void		sastantua_door(int i, int stage, int doorsize, char *str)
{
	ft_repeatchar('|', doorsize - (stage > 3 ? 1 : 0), str);
	if (stage > 3)
	{
		if (i - 2 - stage % 2 == doorsize / 2)
			ft_repeatchar('$', 1, str);
		else
			ft_repeatchar('|', 1, str);
	}
	ft_repeatchar('|', 1, str);
}

void		sastantua_part(int *size, int stage, int door, char **tab)
{
	int		i;
	int		s;
	int		doorsize;
	int		max;

	i = -1;
	if ((max = 0) != 1 && stage)
		*size += (2 + (stage - 1) / 2) * 2;
	while (++i < 3 + stage)
	{
		if ((tab[i] = malloc(sizeof(char) * (max * max))) == NULL)
			return ;
		*size += 2;
		doorsize = stage - stage % 2;
		ft_repeatchar(' ', (max - *size) / 2, tab[i]);
		ft_repeatchar('/', 1, tab[i]);
		s = *size / 2 - (door && i > stage % 2 + 1 ? doorsize / 2 : 0);
		ft_repeatchar('*', s, tab[i]);
		if (door && (i > stage % 2 + 1))
			sastantua_door(i, stage, doorsize, tab[i]);
		else
			ft_repeatchar('*', 1, tab[i]);
		ft_repeatchar('*', s, tab[i]);
		ft_repeatchar('\0', 1, tab[i]);
	}
}

void		sastantua_size(int *size, int stage)
{
	int		i;

	if (stage)
		*size += (2 + (stage - 1) / 2) * 2;
	i = -1;
	while (++i < 3 + stage)
		*size += 2;
}

char		**sastantua(int size)
{
	int		maxsize;
	int		stage;
	int		lsize;
	char	**tab;
	int		tail;

	if ((tab = malloc(sizeof(char *) * (size + size))) == NULL)
		return (NULL);
	maxsize = -1;
	lsize = -1;
	stage = -1;
	tail = 0;
	while (++stage < size)
		sastantua_size(&maxsize, stage);
	stage = -1;
	while (++stage < size)
	{
		sastantua_part(&lsize, stage, stage == size - 1, &tab[tail]);
		tail = tail + 3 + stage;
	}
	return (tab);
}
