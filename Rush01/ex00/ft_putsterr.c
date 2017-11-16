/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsterr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:32:46 by juspende          #+#    #+#             */
/*   Updated: 2017/07/16 14:31:47 by juspende         ###   ########.fr       */
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

int		ft_putsterr(char *str, int error_status)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	return (error_status);
}
