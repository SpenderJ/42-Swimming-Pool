/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 12:04:11 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 12:37:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	**ft_split(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	if (str)
		while (str[i] != '\0')
			ft_putchar(str[i++]);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		++i;
	return (i);
}

void	ft_sorttab(char **tab)
{
	int		i;
	char	*tmp;

	i = 0;
	while (tab[i + 1] != NULL)
	{
		if (ft_strlen(tab[i]) > ft_strlen(tab[i + 1]))
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			++i;
	}
}

int		comp_2char(char a, char b)
{
	if (a <= 'Z' && a >= 'A')
		a = a + 32;
	if (b <= 'Z' && b >= 'A')
		b = b + 32;
	return (a - b);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (comp_2char(s1[i], s2[i]) != 0)
			return (comp_2char(s1[i], s2[i]));
		++i;
	}
	return (0);
}

int		ft_strtabcomp(char **tab, int nbr)
{
	char 	**array;
	int		i;
	char	*tmp;

	i = -1;
	if ((array = malloc(sizeof(char *) * (4096))) == NULL)
		return (0);
	while (ft_strlen(tab[++i]) == nbr)
		array[i] = tab[i];
	array[i] = NULL;
	i = 0;
	while (array[i + 1] != NULL)
	{
		if (ft_strcmp(array[i], array[i + 1]) > 0)
		{
			tmp = array[i + 1];
			array[i + 1] = array[i];
			array[i] = tmp;
			i = 0;
		}
		else
			++i;
	}
	i = 0;
	while (array[i] != NULL)
	{
		if (i != 0)
			ft_putchar(' ');
		ft_putstr(array[i++]);
	}
	ft_putchar('\n');
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	**tab;
	int		nb;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	tab = ft_split(argv[1]);
	if (tab == NULL || tab[0] == NULL)
		return (0);
	ft_sorttab(tab);
	i = 0;
	while (tab[i] != NULL)
	{
		nb = ft_strlen(tab[i]);
		ft_strtabcomp(&tab[i], nb);
		while (ft_strlen(tab[i]) == nb)
			++i;
	}
	return (0);
}
