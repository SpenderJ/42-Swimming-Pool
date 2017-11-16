/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 22:36:11 by juspende          #+#    #+#             */
/*   Updated: 2017/07/16 03:11:07 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strdup(char *str);
int		main(int argc, char **argv);
int		ft_putsterr(char *str, int ret);
int		sudoku(char **tab);
int		ft_str_is_numeric(char *str);
int		ft_strlen(char *str);
int		do_you_exist_twice(char *str);

#define SUCCESS (0)

#define SUDOKU_SIZE (11)

#define SUDO_SIZE (9)

#define ERROR (-1)

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	if (!str || str[0] == '\0')
		return (SUCCESS);
	while (str[i] != '\0')
		++i;
	return (i);
}
