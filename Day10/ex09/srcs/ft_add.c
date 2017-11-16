/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 18:09:28 by juspende          #+#    #+#             */
/*   Updated: 2017/07/17 08:41:42 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_add(int n1, int n2)
{
	int		res;

	res = n1 + n2;
	ft_putnbr(res);
	ft_putchar('\n');
	return (0);
}

int	ft_sub(int n1, int n2)
{
	int		res;

	res = n1 - n2;
	ft_putnbr(res);
	ft_putchar('\n');
	return (0);
}

int	ft_mul(int n1, int n2)
{
	int		res;

	res = n1 * n2;
	ft_putnbr(res);
	ft_putchar('\n');
	return (0);
}

int	ft_div(int n1, int n2)
{
	int		res;

	if (n2 <= 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	res = n1 / n2;
	ft_putnbr(res);
	ft_putchar('\n');
	return (0);
}

int	ft_mod(int n1, int n2)
{
	int		res;

	if (n2 <= 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	res = n1 % n2;
	ft_putnbr(res);
	ft_putchar('\n');
	return (0);
}
