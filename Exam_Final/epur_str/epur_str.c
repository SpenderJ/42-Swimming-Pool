/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 10:45:58 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 10:54:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		w;

	i = 0;
	w = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		while (argv[1][i] != '\0' && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			++i;
		if (argv[1][i] != '\0' && w != 0)
			ft_putchar(' ');
		while (argv[1][i] != '\0' && (argv[1][i] != ' ' && argv[1][i] != '\t'))
		{
			ft_putchar(argv[1][i]);
			++i;
			++w;
		}
	}
	ft_putchar('\n');
	return (0);
}
