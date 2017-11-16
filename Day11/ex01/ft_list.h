/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 09:55:04 by juspende          #+#    #+#             */
/*   Updated: 2017/07/21 09:37:14 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>

typedef struct s_list	t_list;

struct				s_list
{
	t_list			*next;
	void			*data;
};

t_list				*ft_create_elem(void *data);
void				ft_list_push_back(t_list **begin_list, void *data);

#endif
