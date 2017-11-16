/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 11:16:43 by juspende          #+#    #+#             */
/*   Updated: 2017/07/17 14:27:59 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_any(char **tab, int (*f)(char*))
{
	int		i;
	int		ret;

	i = -1;
	if (!tab || tab[0] == NULL)
		return (0);
	while (tab[++i] != NULL)
	{
		ret = f(tab[i]);
		if (ret == 1)
			return (1);
	}
	return (0);
}
