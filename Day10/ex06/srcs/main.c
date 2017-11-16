/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 11:40:18 by juspende          #+#    #+#             */
/*   Updated: 2017/07/17 08:44:17 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_opp.h"

int		main(int argc, char **argv)
{
	int		n1;
	int		n2;

	if (argc != 4)
		return (0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	ft_opp(argv[2], n1, n2);
}

void	ft_opp(char *op, int n1, int n2)
{
	int		i;
	int		res;

	i = -1;
	res = -1;
	if (!op)
		return ;
	while (++i < OPPNUMBER)
		if (ft_strcmp(op, g_opptab[i].sign) == 0)
			res = g_opptab[i].op(n1, n2);
	if (res == -1)
		ft_usage(n1, n2);
}
