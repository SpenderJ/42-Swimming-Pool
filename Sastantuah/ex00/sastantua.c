/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 22:23:47 by juspende          #+#    #+#             */
/*   Updated: 2017/07/09 23:38:39 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_stage(int etage, int blanc)
{
	int		i;
	int		max;
	int		white;
	int		n;

	i = 1;
	max = 1;
	while (++i < etage + 2)
		max = max + (i * 2) + (6 + (2 * ((i - 2) / 2)));
	white = blanc - (max / 2);
	while (etage + 2 >= 0)
	{
		n = -1;
		i = -1;
		while (++i < white - 2)
			ft_putchar(' ');
		ft_putchar('/');
		while (++n < max)
			ft_putchar('*');
		max = max + 2;
		ft_putchar('\\');
		ft_putchar('\n');
		white = white - 1;
		etage = etage - 1;
	}
}

void	make_key(int *n, int max, int entry, int etage)
{
	int		i;

	i = 0;
	while (*n < (max / 2) + (entry / 2) - 2)
	{
		ft_putchar('|');
		*n = *n + 1;
	}
	if (etage == ((entry / 2) - 2) && entry > 4)
	{
		ft_putchar('$');
		ft_putchar('|');
		*n = *n + 3;
	}
	else
	{
		ft_putchar('|');
		if (entry > 2)
			ft_putchar('|');
		else
			ft_putchar('*');
		*n = *n + 3;
	}
}

void	print_door2(int etage, int white, int max, int entry)
{
	int		i;
	int		n;

	while (etage + 2 >= 0)
	{
		i = -1;
		n = -1;
		while (++i < white - 2)
			ft_putchar(' ');
		ft_putchar('/');
		while (++n < (max / 2) - (entry / 2))
			ft_putchar('*');
		n--;
		make_key(&n, max, entry, etage);
		while (n++ < max)
			ft_putchar('*');
		max = max + 2;
		ft_putchar('\\');
		ft_putchar('\n');
		white = white - 1;
		etage = etage - 1;
	}
}

void	print_door(int i, int etage, int blanc, int entry)
{
	int		max;
	int		white;
	int		n;

	max = 1;
	while (++i < etage + 2)
		max = max + (i * 2) + (6 + (2 * ((i - 2) / 2)));
	white = blanc - (max / 2);
	entry = entry - ((entry + 1) % 2);
	while (etage + 2 >= entry)
	{
		n = -1;
		i = -1;
		while (++i < white - 2)
			ft_putchar(' ');
		ft_putchar('/');
		while (++n < max)
			ft_putchar('*');
		max = max + 2;
		ft_putchar('\\');
		ft_putchar('\n');
		white = white - 1;
		etage = etage - 1;
	}
	print_door2(etage, white, max, entry);
}

void	sastantua(int size)
{
	int		max;
	int		try;
	int		i;

	i = 0;
	try = 1;
	max = 1;
	if (size <= 0)
		return ;
	while ((++try - 2) < size - 1)
		max = max + (try * 2) + (6 + (2 * ((try - 2) / 2)));
	max = ((max + (try * 2)) / 2) + 2;
	while (i < size - 1)
	{
		print_stage(i, max);
		i = i + 1;
	}
	print_door(1, i, max, size);
}
