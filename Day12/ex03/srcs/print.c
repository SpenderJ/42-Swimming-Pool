/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 07:58:48 by juspende          #+#    #+#             */
/*   Updated: 2017/07/20 00:32:39 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		ft_putchar('-');
		i = -nb;
	}
	else
		i = nb;
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
}

void	print_hexa(char c)
{
	int		i;

	i = 0;
	i = c;
	if (i == 0)
		ft_putstr("  ");
	else if (i <= 16)
		ft_putchar('0');
	if (i != 0)
		ft_putnbr_base(i, "0123456789abcdef");
	ft_putchar(' ');
	return ;
}

void	print_9_digits(int i)
{
	int		z;
	char	*str;
	int		n;

	z = 8;
	n = -1;
	if (i == 0)
	{
		ft_putstr("00000000");
		ft_putstr("  ");
		return ;
	}
	str = ft_putnbr_base2(i, "0123456789abcdef");
	while (str[++n] != '\0')
		;
	while (++n < z)
		ft_putchar('0');
	ft_putstr(str);
	ft_putchar('0');
	ft_putstr("  ");
}

void	print_end(int i)
{
	int		z;
	char	*str;
	int		n;

	z = 8;
	n = -1;
	if (i == 0)
		return ;
	str = ft_putnbr_base2(i, "0123456789abcdef");
	while (str[++n] != '\0')
		;
	while (++n <= z)
		ft_putchar('0');
	ft_putstr(str);
	ft_putchar('\n');
}

void	print_normal(char *file)
{
	int		n;

	n = -1;
	ft_putstr(" |");
	while (++n < 16)
	{
		if (file[n] == '\n' || file[n] == '\t')
			ft_putchar('.');
		else
			ft_putchar(file[n]);
	}
	ft_putchar('|');
	if (ft_strncmp(file, "                ", 16) == 0 ||
			ft_strncmp(file, "****************", 16) == 0)
		ft_putstr("\n*");
	ft_putchar('\n');
	return ;
}
