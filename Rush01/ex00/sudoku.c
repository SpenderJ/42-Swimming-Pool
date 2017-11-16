/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 14:01:32 by juspende          #+#    #+#             */
/*   Updated: 2017/07/16 23:31:18 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int				ft_strcmp(char *s1, char *s2);
void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_strdup(char *str);
int				main(int argc, char **argv);
int				ft_putsterr(char *str, int ret);
int				sudoku(char **tab);
int				ft_str_is_numeric(char *str);
int				ft_strlen(char *str);
int				do_you_exist_twice(char *str);
char			**reverse_tab(char **tab);

#define SUCCESS (0)

#define SUDOKU_SIZE (11)

#define SUDO_SIZE (9)

#define ERROR (-1)

typedef struct	s_sudoku
{
	char		**stockage;
	int			nbr;
}				t_sudoku;

static int		check_free(char **sudoku, int y, int x, int nb)
{
	int		i;
	int		xs;
	int		ys;

	i = -1;
	while (++i < 9)
		if ((sudoku[y][i] == nb + 48) || (sudoku[i][x] == nb + 48))
			return (0);
	xs = (x / 3) * 3;
	ys = (y / 3) * 3;
	i = -1;
	while (++i < 9)
		if (sudoku[ys + (i % 3)][xs + (i / 3)] == nb + 48)
			return (0);
	return (1);
}

static int		fill_struct(char **sudoku, t_sudoku *solution)
{
	int			i;

	i = 0;
	if (solution->nbr != 0)
	{
		solution->nbr = 84;
		return (ft_putsterr("Error\n", 1));
	}
	if ((solution->stockage = malloc(sizeof(char *) * (SUDOKU_SIZE))) == NULL)
		return (ERROR);
	while (sudoku[i] != NULL)
	{
		solution->stockage[i] = ft_strdup(sudoku[i]);
		i++;
	}
	solution->stockage[i] = NULL;
	solution->nbr = 1;
	return (0);
}

static int		resolve(char **sudoku, int y, int x, t_sudoku *solution)
{
	int		n;

	if (x >= 9)
	{
		x = 0;
		if (++y >= 9)
			return (fill_struct(sudoku, solution));
	}
	if (sudoku[y][x] != '.')
		return (resolve(sudoku, y, x + 1, solution));
	n = -1;
	while (++n < 9)
	{
		if (check_free(sudoku, y, x, n + 1))
		{
			sudoku[y][x] = n + 1 + 48;
			if (resolve(sudoku, y, x + 1, solution))
				return (1);
		}
		sudoku[y][x] = '.';
	}
	return (0);
}

int				sudoku(char **sudoku)
{
	int			i;
	char		**tab;
	t_sudoku	*solution;

	if ((solution = malloc(sizeof(t_sudoku))) == NULL)
		return (ERROR);
	solution->nbr = 0;
	tab = &sudoku[1];
	if (ft_strcmp(tab[(i = 0)], tab[8]) < 0)
	{
		resolve(reverse_tab(tab), 0, 0, solution);
		solution->stockage = reverse_tab(solution->stockage);
	}
	else
		resolve(tab, 0, 0, solution);
	if (solution->nbr != 1)
		return (0);
	while (i < SUDO_SIZE)
	{
		ft_putstr(solution->stockage[i++]);
		ft_putchar('\n');
	}
	free(solution->stockage);
	free(solution);
	return (0);
}
