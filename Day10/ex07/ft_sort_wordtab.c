/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:52:50 by juspende          #+#    #+#             */
/*   Updated: 2017/07/17 14:06:21 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strcmp2(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i = i + 1;
	return (s1[i] - s2[i]);
}

int		swap_tab2(char **tab, int i)
{
	int		a;
	char	*buffer;

	a = 0;
	buffer = tab[i];
	tab[i] = tab[i - 1];
	tab[i - 1] = buffer;
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;

	i = 0;
	while (tab[++i] != NULL)
		if (ft_strcmp2(tab[i], tab[i - 1]) < 0)
			i = swap_tab2(tab, i);
}
