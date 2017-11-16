/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 09:59:44 by juspende          #+#    #+#             */
/*   Updated: 2017/07/12 10:48:40 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_space(char *str)
{
	int		i;
	int		res;

	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			res = res + 1;
		i = i + 1;
	}
	return (res + 1);
}

char	*str_to_next_tab(char *str)
{
	int		i;
	char	*final;

	i = 0;
	while (str[i] != '\0' && str[i] != '\t' && str[i] != '\n'\
			&& str[i] != ' ')
		i = i + 1;
	if ((final = malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	i = -1;
	while (str[++i] != '\0' && str[i] != '\t' && str[i] != '\n'\
			&& str[i] != ' ')
		final[i] = str[i];
	final[i] = '\0';
	return (final);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	char	**tab;
	int		a;

	i = 0;
	a = -1;
	if ((tab = malloc(sizeof(char *) * (count_space(str) + 1))) == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == '\t' || str[i] == '\n'\
				|| str[i] == ' '))
			i++;
		if (str[i] != '\0')
			tab[++a] = str_to_next_tab(&str[i]);
		while (str[i] != '\0' && str[i] != '\t' && str[i] != '\n'\
				&& str[i] != ' ')
			i = i + 1;
	}
	tab[++a] = NULL;
	return (tab);
}
