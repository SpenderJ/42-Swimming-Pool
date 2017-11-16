/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 09:44:35 by juspende          #+#    #+#             */
/*   Updated: 2017/07/14 16:24:05 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen2(char *str)
{
	int		i;

	i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
			i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		a;

	i = 0;
	a = 0;
	while (dest[a] != '\0')
		a = a + 1;
	while (src[i] != '\0')
	{
		dest[a] = src[i];
		a = a + 1;
		i = i + 1;
	}
	dest[a] = '\0';
	return (dest);
}

char	*ft_concat_params(char **argv, char *sep)
{
	int		i;
	int		res;
	char	*str;
	int		n;

	i = 0;
	res = 0;
	while (argv[i] != NULL)
		res = res + ft_strlen2(argv[i++]);
	str = malloc(sizeof(char) * (res + (ft_strlen2(sep) * res) + 4096));
	i = 0;
	n = -1;
	while (argv[++i] != NULL)
	{
		res = -1;
		while (argv[i][++res] != '\0')
			str[++n] = argv[i][res];
		if (argv[i + 1] != NULL)
			str = ft_strcat(str, sep);
		while (str[n] != '\0')
			++n;
	}
	str[++n] = '\0';
	return (str);
}

char	*ft_join(char **tab, char *sep)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_concat_params(tab, sep);
	return (str);
}
