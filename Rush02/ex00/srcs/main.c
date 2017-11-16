/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 00:12:09 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 23:36:43 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define TABS (10)
#define SUCCESS (0)

char			**get_map(void)
{
	int		i;
	char	**tab;
	char	*buffer;
	char	*str;
	int		c;

	i = -1;
	c = 0;
	if ((str = malloc(sizeof(char) * (2))) == NULL ||
			((buffer = malloc(sizeof(char) * 2)) == NULL))
		return (NULL);
	while (read(0, buffer, 1) > 0 && buffer[0] != '\n')
	{
		str[++i] = buffer[0];
		str[i + 1] = '\0';
		str = ft_strdup(str);
	}
	i = i + 2;
	if ((tab = malloc(sizeof(char *) * ((i + TABS) * (i + TABS)))) == NULL)
		return (NULL);
	tab[c] = ft_strdup(str);
	while (read(0, str, i) > 0)
		tab[++c] = ft_strdup(str);
	tab[++c] = NULL;
	return (tab);
}

static int		print_solv(int rush, int x, int y, int solnumber)
{
	if (solnumber != 0)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putnbr(rush);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
	return (1);
}

static int		is_rush(char **tab, int solnumber)
{
	int		x;
	int		y;
	int		i;

	i = -1;
	while (tab[0][++i] != '\0')
		;
	x = i;
	i = -1;
	while (tab[++i] != NULL)
		;
	y = i;
	if (tab_comparator(tab, rush00(x, y)) == SUCCESS)
		solnumber = solnumber + print_solv(0, x, y, solnumber);
	if (tab_comparator(tab, rush01(x, y)) == SUCCESS)
		solnumber = solnumber + print_solv(1, x, y, solnumber);
	if (tab_comparator(tab, rush02(x, y)) == SUCCESS)
		solnumber = solnumber + print_solv(2, x, y, solnumber);
	if (tab_comparator(tab, rush03(x, y)) == SUCCESS)
		solnumber = solnumber + print_solv(3, x, y, solnumber);
	if (tab_comparator(tab, rush04(x, y)) == SUCCESS)
		solnumber = solnumber + print_solv(4, x, y, solnumber);
	return (solnumber);
}

int				main(void)
{
	int		i;
	int		solnumber;
	char	**tab;

	i = -1;
	solnumber = 0;
	tab = get_map();
	if (tab == NULL)
		return (ft_putstr("aucune\n"));
	solnumber = solnumber + is_rush(tab, solnumber);
	solnumber = solnumber + is_basic_form(tab, solnumber);
	if (solnumber == 0)
		return (ft_putstr("aucune\n"));
	ft_putchar('\n');
	return (0);
}
