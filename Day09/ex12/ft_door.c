/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 08:59:18 by juspende          #+#    #+#             */
/*   Updated: 2017/07/14 13:35:42 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

static void	ft_putstr2(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

t_bool		close_door(t_door *door)
{
	ft_putstr2("Door closing...\n");
	door->state = CLOSE;
	return (TRUE);
}

t_bool		is_door_open(t_door *door)
{
	ft_putstr2("Door is open ?\n");
	return (door->state == OPEN);
}

t_bool		is_door_close(t_door *door)
{
	ft_putstr2("Door is close ?\n");
	return (door->state == CLOSE);
}

t_bool		open_door(t_door *door)
{
	ft_putstr2("Door opening...\n");
	door->state = OPEN;
	return (TRUE);
}
