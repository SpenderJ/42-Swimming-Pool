/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 09:44:35 by juspende          #+#    #+#             */
/*   Updated: 2017/07/12 16:37:58 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
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

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		res;
	char	*str;
	int		n;

	i = 0;
	res = 0;
	while (argv[i] != NULL && argc)
		res = res + ft_strlen(argv[i++]);
	if ((str = malloc(sizeof(char) * (res + argc))) == NULL)
		return (NULL);
	i = 0;
	n = -1;
	while (argv[++i] != NULL)
	{
		res = -1;
		while (argv[i][++res] != '\0')
			str[++n] = argv[i][res];
		if (i != argc - 1)
			str[++n] = '\n';
	}
	str[++n] = '\0';
	return (str);
}
