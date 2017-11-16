/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 10:44:05 by juspende          #+#    #+#             */
/*   Updated: 2017/07/20 20:47:45 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *node;

	if (begin_list1 == NULL)
		return ;
	else if (*begin_list1 == NULL)
		*begin_list1 = begin_list2;
	else
	{
		node = *begin_list1;
		while (node->next)
			node = node->next;
		node->next = begin_list2;
	}
}
