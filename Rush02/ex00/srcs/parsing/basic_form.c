/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_form.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 17:30:16 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 22:05:30 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define SUCCESS (0)

int			tab_len(char **tab)
{
	int		i;

	i = 0;
	if (!tab)
		return (0);
	while (tab[i] != NULL)
		++i;
	return (i);
}

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		++i;
	return (i);
}

static int	print_basic(int i, int x, int y, int solnumber)
{
	if (solnumber != 0)
		ft_putstr(" || ");
	if (i == 0)
		ft_putstr("[carre] [");
	else if (i == 1)
		ft_putstr("[rectangle] [");
	else if (i == 2)
		ft_putstr("[triangle] [");
	else if (i == 3)
		ft_putstr("[losange] [");
	else if (i == 4)
		ft_putstr("[sastantua] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
	return (1);
}

int			is_basic_form(char **tab, int solnumber)
{
	int		x;
	int		y;

	y = tab_len(tab);
	x = ft_strlen(tab[0]);
	if (x <= 0 || y <= 0)
		return (0);
	if (tab_comparator(tab, carre(x)) == SUCCESS)
		solnumber = solnumber + print_basic(0, x, y, solnumber);
	if (tab_comparator(tab, rectangle(x, y)) == SUCCESS)
		solnumber = solnumber + print_basic(1, x, y, solnumber);
	if (tab_comparator(tab, triangle(x)) == SUCCESS)
		solnumber = solnumber + print_basic(2, x, y, solnumber);
	if (tab_comparator(tab, losange(x)) == SUCCESS)
		solnumber = solnumber + print_basic(3, x, y, solnumber);
	return (solnumber);
}
