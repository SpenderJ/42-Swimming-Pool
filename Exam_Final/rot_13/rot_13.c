/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 09:57:22 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 10:12:09 by exam             ###   ########.fr       */
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

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			argv[1][i] = argv[1][i] + 13;
		else if ((argv[1][i] > 'm' && argv[1][i] <= 'z') || (argv[1][i] > 'M' && argv[1][i] <= 'Z'))
			argv[1][i] = argv[1][i] - 13;
		ft_putchar(argv[1][i]);
		++i;
	}
	ft_putchar('\n');
	return (0);
}

