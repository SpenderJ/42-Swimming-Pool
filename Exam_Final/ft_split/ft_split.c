/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 10:58:52 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 11:11:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    **ft_split(char *str)
{
	int		i;
	int		a;
	int		c;
	int		size;
	char	**tab;

	size = 0;
	i = 0;
	a = -1;
	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		++size;
	if ((tab = malloc(sizeof(char *) * (size + 1))) == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			++i;
		if (str[i] != '\0')
			if ((tab[++a] = malloc(sizeof(char) * (size + 1))) == NULL)
				return (NULL);
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			tab[a][c] = str[i];
			tab[a][c + 1] = '\0';
			++c;
			++i;
		}
	}
	tab[++a] = NULL;
	return (tab);
}
