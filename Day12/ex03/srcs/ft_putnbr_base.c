/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 22:37:51 by juspende          #+#    #+#             */
/*   Updated: 2017/07/19 00:27:01 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		my_error(char *base)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	if (!(base) || base[0] == '\0' || base[1] == '\0')
		return (84);
	while (base[i] != '\0')
	{
		n = 0;
		if (base[i] == '-' || base[i] == '+')
			return (84);
		while (base[n] != '\0')
		{
			if (n == i)
				++n;
			else
			{
				if (base[n++] == base[i])
					return (84);
			}
		}
		i = i + 1;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char			str[4096];
	unsigned int	i;
	int				x;
	unsigned int	nb;

	i = 0;
	x = 0;
	if (my_error(base) == 84)
		return ;
	while (base[i] != '\0')
		i = i + 1;
	if (nbr < 0)
		ft_putchar('-');
	if (nbr < 0)
		nb = -nbr;
	else
		nb = nbr;
	while (nb >= i)
	{
		str[x++] = base[(nb % i)];
		nb = nb / i;
	}
	str[x++] = base[(nb % i)];
	while (--x >= 0)
		ft_putchar(str[x]);
}

char	*ft_putnbr_base2(int nbr, char *base)
{
	char			*str;
	unsigned int	i;
	int				x;
	unsigned int	nb;

	i = 0;
	x = 0;
	str = malloc(sizeof(char) * 4096);
	if (my_error(base) == 84)
		return (NULL);
	while (base[i] != '\0')
		i = i + 1;
	if (nbr < 0)
		ft_putchar('-');
	if (nbr < 0)
		nb = -nbr;
	else
		nb = nbr;
	while (nb >= i)
	{
		str[x++] = base[(nb % i)];
		nb = nb / i;
	}
	str[x++] = base[(nb % i)];
	return (ft_strrev(str));
}
