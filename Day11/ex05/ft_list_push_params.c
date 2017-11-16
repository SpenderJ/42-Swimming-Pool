/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 10:40:38 by juspende          #+#    #+#             */
/*   Updated: 2017/07/20 15:06:17 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int argc, char **argv)
{
	t_list *head;
	t_list *node;

	if (argc < 1)
		return (NULL);
	if ((head = ft_create_elem(argv[--argc])) == NULL)
		return (NULL);
	node = head;
	while (argc > 0 && (node->next = ft_create_elem(argv[--argc])) != NULL)
		node = node->next;
	return (head);
}
