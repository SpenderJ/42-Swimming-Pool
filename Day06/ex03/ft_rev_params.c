/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:37:51 by juspende          #+#    #+#             */
/*   Updated: 2017/07/10 22:30:18 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	while (argv[i] != NULL && argc)
		++i;
	--i;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		--i;
		ft_putchar('\n');
	}
	return (0);
}
