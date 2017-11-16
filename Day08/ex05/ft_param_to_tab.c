/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 09:27:24 by juspende          #+#    #+#             */
/*   Updated: 2017/07/13 13:37:09 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	char			*str;
	int				i;

	i = 0;
	while (src[i] != '\0')
		++i;
	if ((str = malloc(sizeof(char) * (i + 1000))) == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		++i;
	}
	str[i] = '\0';
	return (str);
}

int					ft_strlen(char *str)
{
	int				i;

	i = -1;
	if (!str)
		return (0);
	while (str[++i] != '\0')
		;
	return (i);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*stock;
	int				i;

	i = 0;
	if ((stock = malloc(sizeof(t_stock_par) * (ac + 1000))) == NULL)
		return (NULL);
	if (ac > 0 && av != NULL)
	{
		i = -1;
		while (++i < ac)
		{
			stock[i].size_param = ft_strlen(av[i]);
			stock[i].str = av[i];
			stock[i].copy = ft_strdup(av[i]);
			stock[i].tab = ft_split_whitespaces(av[i]);
		}
		stock[i].str = NULL;
	}
	return (stock);
}
