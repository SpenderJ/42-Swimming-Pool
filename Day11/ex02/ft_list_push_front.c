/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 13:36:27 by juspende          #+#    #+#             */
/*   Updated: 2017/07/20 13:41:39 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*new;

	if (begin_list && (new = ft_create_elem(data)))
	{
		new->next = *begin_list;
		*begin_list = new;
	}
	return ;
}
