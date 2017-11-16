/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 01:04:52 by juspende          #+#    #+#             */
/*   Updated: 2017/07/14 11:13:23 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i = i + 1;
	if (s2[i] != '\0')
		return (s1[i] - s2[i]);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = str[i] + 32;
		i = i + 1;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int		i;
	int		a;

	i = -1;
	while (argv[++i] != NULL && argc)
		ft_strlowcase(argv[i]);
	i = -1;
	while (argv[++i] != NULL)
	{
		a = -1;
		while (argv[i][++a] != '\0' && (argv[i][a] == ' ' ||\
				argv[i][a] == '\t' || argv[i][a] == '\n'))
			;
		if (argv[i][a] != '\0')
			if (((ft_strcmp(&argv[i][a], "president") == 0) ||\
					(ft_strcmp(&argv[i][a], "attack") == 0) ||\
					(ft_strcmp(&argv[i][a], "powers") == 0)))
				return (ft_putstr("Alert!!!\n"));
	}
	return (0);
}
