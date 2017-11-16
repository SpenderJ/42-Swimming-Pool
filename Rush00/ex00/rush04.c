/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 10:02:33 by juspende          #+#    #+#             */
/*   Updated: 2017/07/09 12:39:42 by sboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	center(int x, int y, char bordure)
{
	int		i;
	int		a;

	i = 1;
	a = 1;
	while (i < y - 1)
	{
		a = 1;
		ft_putchar(bordure);
		while (++a < x)
			ft_putchar(' ');
		if (x > 1)
			ft_putchar(bordure);
		ft_putchar('\n');
		i = i + 1;
	}
}

void	lowline(char coin2, int x, char bordure0, char coin3)
{
	int		i;

	i = 1;
	ft_putchar(coin2);
	while (++i < x)
		ft_putchar(bordure0);
	if (x > 1)
		ft_putchar(coin3);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	char	coin[4];
	char	bordure[2];
	int		i;

	i = 0;
	bordure[0] = 'B';
	bordure[1] = 'B';
	coin[0] = 'A';
	coin[1] = 'C';
	coin[2] = 'C';
	coin[3] = 'A';
	ft_putchar(coin[0]);
	while (++i < x - 1)
		ft_putchar(bordure[0]);
	if (x > 1)
		ft_putchar(coin[1]);
	ft_putchar('\n');
	center(x, y, bordure[1]);
	i = 1;
	if (y > 1)
		lowline(coin[2], x, bordure[0], coin[3]);
}
