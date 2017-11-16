/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:52:50 by juspende          #+#    #+#             */
/*   Updated: 2017/07/17 14:29:41 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		swap_tab(char **tab, int i)
{
	int		a;
	char	*buffer;

	a = 0;
	buffer = tab[i];
	tab[i] = tab[i - 1];
	tab[i - 1] = buffer;
	return (0);
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;

	i = 0;
	if (cmp == NULL || tab == NULL)
		return ;
	while (tab[++i] != NULL)
		if (cmp(tab[i], tab[i - 1]) < 0)
			i = swap_tab(tab, i);
}
