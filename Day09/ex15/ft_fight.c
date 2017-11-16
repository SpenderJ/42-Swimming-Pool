/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:35:14 by juspende          #+#    #+#             */
/*   Updated: 2017/07/14 16:21:36 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fight.h"

void	ft_putchar5(char c)
{
	write(1, &c, 1);
}

void	ft_putstr5(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar5(str[i++]);
}

void	ft_fight(t_perso *fighter1, t_perso *fighter2, int power, char *desc)
{
	int		i;

	i = 0;
	if (fighter1->life <= 0 || fighter2->life <= 0)
		return ;
	ft_putstr5(fighter1->name);
	ft_putstr5(" does a ");
	ft_putstr5(desc);
	ft_putstr5(" on ");
	ft_putstr5(fighter2->name);
	ft_putstr5("\n");
	fighter2->life = fighter2->life - power;
	if (fighter2->life <= 0)
	{
		ft_putstr5(fighter2->name);
		ft_putstr5(" is dead\n");
	}
	return ;
}
