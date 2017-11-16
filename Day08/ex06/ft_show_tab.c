/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:05:11 by juspende          #+#    #+#             */
/*   Updated: 2017/07/12 17:30:25 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>
#include <unistd.h>

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

void	ft_putstr(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		++i;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		ft_putchar('-');
		i = -nb;
	}
	else
		i = nb;
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int			i;
	int			a;

	i = 0;
	while (par->str != NULL)
	{
		a = 0;
		ft_putstr(par->copy);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		ft_print_words_tables(par->tab);
		par++;
	}
}
