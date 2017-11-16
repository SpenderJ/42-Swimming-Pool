/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 21:45:37 by juspende          #+#    #+#             */
/*   Updated: 2017/07/12 10:21:35 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		are_you_there(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		++i;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	int		n;
	int		i;
	char	**tab;
	int		res;

	res = 1;
	n = -1;
	i = 0;
	while (str[i] != '\0')
		if (are_you_there(charset, str[i++]) == 1)
			++res;
	i = 0;
	tab = malloc(sizeof(char *) * (res + 1));
	while (str[i] != '\0')
	{
		res = 0;
		while (str[i] != '\0' && are_you_there(charset, str[i]) == 1)
			++i;
		if (str[i] != '\0')
			tab[++n] = malloc(sizeof(char) * (4096));
		while (str[i] != '\0' && are_you_there(charset, str[i]) == 0)
			tab[n][res++] = str[i++];
	}
	tab[++n] = NULL;
	return (tab);
}
