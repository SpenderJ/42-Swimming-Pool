/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 10:08:10 by juspende          #+#    #+#             */
/*   Updated: 2017/07/14 16:23:06 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"
#include <stdlib.h>

int				ft_atoi(char *str)
{
	int				i;
	unsigned int	a;
	unsigned int	c;
	unsigned int	d;

	a = 0;
	i = -1;
	c = 1;
	d = 0;
	while (str[++i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			++a;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		d = (d * c) + (str[i] - 48);
		c = 10;
		i = i + 1;
	}
	if (a == 0)
		return (d);
	else if (a == 1)
		return (-d);
	return (0);
}

int				ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char			*ft_strdup_editted(char *str)
{
	char		*blc;
	int			i;

	if ((blc = malloc(sizeof(char) * (ft_strlen(str)))) == NULL)
		return (NULL);
	i = -1;
	while (str[++i] != '\0' && str[i] != ';')
		blc[i] = str[i];
	blc[i] = '\0';
	return (blc);
}

t_perso			**ft_decrypt(char *str)
{
	int			i;
	t_perso		**perso;
	int			c;

	c = 0;
	if ((perso = malloc(sizeof(t_perso *) * (ft_strlen(str) + 1000))) == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		perso[c] = malloc(sizeof(t_perso) * (ft_strlen(str) + 4096));
		perso[c]->age = ft_atoi(&str[i]);
		while (str[i] != '\0' && str[i] != '|')
			++i;
		if (str[++i] != '\0')
			perso[c]->name = ft_strdup_editted(&str[i]);
		while (str[i] != '\0' && str[i] != ';')
			++i;
		if (str[i] != '\0')
			i++;
		c = c + 1;
	}
	return (perso);
}
