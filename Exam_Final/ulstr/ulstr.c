/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 10:13:05 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 10:16:28 by exam             ###   ########.fr       */
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
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			argv[1][i] = argv[1][i] + 32;
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			argv[1][i] = argv[1][i] - 32;
		ft_putchar(argv[1][i]);
		++i;
	}
	ft_putchar('\n');
	return (0);
}
