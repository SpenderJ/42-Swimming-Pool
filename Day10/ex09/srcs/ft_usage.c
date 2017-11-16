/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 20:25:25 by juspende          #+#    #+#             */
/*   Updated: 2017/07/17 08:39:25 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_opp.h"

int	ft_usage(int n1, int n2)
{
	char	*str;
	int		i;

	i = -1;
	ft_putstr("error : only [ ");
	while (++i < OPPNUMBER - 1)
	{
		str = g_opptab[i].sign;
		ft_putstr(str);
		ft_putchar(' ');
	}
	ft_putstr("] are accepted.\n");
	n1 = n2;
	return (0);
}
