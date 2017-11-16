/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carre.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 05:30:23 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 14:14:57 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static char		**finish_losange(char **losange)
{
	int		i;
	int		mid;

	i = 0;
	while (losange[i] != NULL)
		++i;
	--i;
	mid = i;
	i = 0;
	while (mid - (++i) >= 0)
		losange[mid + i] = ft_strdup(losange[mid - i]);
	losange[mid + i] = NULL;
	return (losange);
}

char			**losange(int base)
{
	int		i;
	char	**losange;
	int		espace;
	int		n;
	int		nb;

	espace = (base / 2) + 1;
	i = 0;
	nb = 1;
	if (base % 2 == 0 || (losange = malloc(sizeof(char*) * (base * 2))) == NULL)
		return (NULL);
	while (espace-- > 0 && (n = 0) != 1)
	{
		if ((losange[i] = malloc(sizeof(char) * (base + 1))) == NULL)
			return (NULL);
		while (n <= espace)
			losange[i][n++] = ' ';
		n = 0;
		while (n < nb)
			losange[i][espace + n++] = '&';
		losange[i++][espace + n] = '\0';
		nb = nb + 2;
	}
	losange[i] = NULL;
	return (finish_losange(losange));
}
