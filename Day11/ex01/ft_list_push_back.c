/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 10:15:50 by juspende          #+#    #+#             */
/*   Updated: 2017/07/21 09:37:23 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*last;
	t_list		*tmp;

	if ((last = ft_create_elem(data)) == NULL)
		return ;
	if (begin_list == NULL)
		return ;
	if (*begin_list == NULL)
		*begin_list = last;
	else
	{
		tmp = *begin_list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = last;
	}
}
