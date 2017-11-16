/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:01:41 by juspende          #+#    #+#             */
/*   Updated: 2017/07/16 21:06:58 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void		ft_putchar(char c);
void		ft_putstr(char *str);
char		*ft_strdup(char *str);
int			main(int argc, char **argv);
int			ft_putsterr(char *str, int ret);
int			sudoku(char **tab);
int			ft_str_is_numeric(char *str);
int			ft_strlen(char *str);
int			do_you_exist_twice(char *str);
int			ft_strcmp(char *s1, char *s2);
char		**reverse_tab(char **tab);

#define SUCCESS (0)

#define SUDOKU_SIZE (11)

#define SUDO_SIZE (9)

#define ERROR (-1)

static int	error_parser(char **argv)
{
	int		i;

	i = 0;
	while (argv[++i] != NULL)
	{
		if (ft_strlen(argv[i]) != 9 || ft_str_is_numeric(argv[i]) != SUCCESS ||\
				do_you_exist_twice(argv[i]) != 0)
			return (ERROR);
	}
	if (i != 10)
		return (ERROR);
	return (SUCCESS);
}

static int	sudoku_rules(char **sudoku)
{
	int		nbcol;
	int		cc;
	int		n;

	nbcol = -1;
	while (++nbcol < 9)
	{
		cc = -1;
		while (++cc < 9)
		{
			n = -1;
			while (++n < 9)
				if (sudoku[cc][nbcol] == sudoku[n][nbcol] && n != cc &&\
						sudoku[cc][nbcol] != '.')
					return (ERROR);
		}
	}
	return (SUCCESS);
}

static int	sudoku_square(char **sudoku, int x, int y)
{
	int		i;
	int		xs;
	int		ys;
	char	c;

	while (y <= 6)
	{
		x = 0;
		while (x <= 6)
		{
			xs = (x / 3) * 3;
			ys = (y / 3) * 3;
			i = -1;
			while (++i < 9)
			{
				c = '0';
				while (++c <= 9)
					if (sudoku[ys + (i % 3)][xs + (i / 3)] == c)
						return (ERROR);
			}
			x = x + 3;
		}
		y = y + 3;
	}
	return (SUCCESS);
}

char		**reverse_tab(char **tab)
{
	int		i;
	char	*ptr;
	int		n;

	i = 0;
	n = 8;
	while (i < n)
	{
		ptr = tab[i];
		tab[i] = tab[n];
		tab[n] = ptr;
		++i;
		--n;
	}
	return (tab);
}

int			main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 10)
		return (ft_putsterr("Error\n", 1));
	if ((error_parser(argv) != SUCCESS) || (sudoku_rules(&argv[1]) != SUCCESS)\
			|| sudoku_square(&argv[1], 0, 0) != SUCCESS)
		return (ft_putsterr("Error\n", 1));
	sudoku(argv);
	return (SUCCESS);
}
