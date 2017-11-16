/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 17:39:17 by juspende          #+#    #+#             */
/*   Updated: 2017/07/11 22:10:57 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		n;

	i = 0;
	while (tab[i] != NULL)
	{
		n = 0;
		while (tab[i][n] != '\0')
			ft_putchar(tab[i][n++]);
		ft_putchar('\n');
		i = i + 1;
	}
}
