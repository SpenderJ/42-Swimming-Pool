/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_comparator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 15:35:53 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 22:04:27 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define ERROR (1)
#define SUCCESS (0)

int		free_all(int returned, char **tab2)
{
	int		i;

	i = 0;
	if (tab2)
	{
		while (tab2[i] != NULL)
			free(tab2[i++]);
		free(tab2);
	}
	return (returned);
}

int		tab_comparator(char **tab1, char **tab2)
{
	int i;
	int j;
	int	xmax;

	j = -1;
	if (tab1 == NULL || tab2 == NULL)
		return (free_all(ERROR, tab2));
	xmax = ft_strlen(tab2[0]);
	while (tab1[++j] != NULL && tab2[j] != NULL)
	{
		i = -1;
		while (tab1[j][++i] != '\0' && tab2[j][i] != '\0')
			if (tab1[j][i] != tab2[j][i])
				if (tab2[j][i] != '&' || tab1[j][i] == ' ')
					return (free_all(ERROR, tab2));
		if (tab1[j][i] != tab2[j][i] && tab1[j][i] != ' ')
			return (free_all(ERROR, tab2));
	}
	if (tab1[j] != tab2[j])
		return (free_all(ERROR, tab2));
	return (free_all(SUCCESS, tab2));
}
