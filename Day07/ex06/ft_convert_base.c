/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 18:58:14 by juspende          #+#    #+#             */
/*   Updated: 2017/07/11 22:10:40 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*finish_him(unsigned int nb, unsigned int i, char *str, char *base_to);

int		base_str(char *str, char *base, int n)
{
	int		i;
	int		a;
	int		res;

	i = 0;
	a = 0;
	if (str[i] == '-' || str[i] == '+')
		return (0);
	while (str[i] != base[a])
		a = a + 1;
	res = a;
	i = i + 1;
	while (str[i] != '\0' && str[i] != '+' && str[i] != '-')
	{
		a = 0;
		while (str[i] != base[a])
			a = a + 1;
		res = res * n + a;
		i = i + 1;
	}
	return (res);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		a;
	char	c;

	i = 0;
	a = 0;
	while (str[i] != '\0')
		i = i + 1;
	i = i - 1;
	while (i >= a)
	{
		c = str[i];
		str[i] = str[a];
		str[a] = c;
		a = a + 1;
		i = i - 1;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	nb;
	unsigned int	i;
	char			*str;

	i = 0;
	if (!nbr || nbr[0] == '\0' || (str = malloc(sizeof(char) * (4096))) == NULL)
		return (0);
	while (base_from[i] != '\0')
		++i;
	if (nbr[0] == '-')
		nb = (base_str(&nbr[1], base_from, i) * -1);
	else if (nbr[0] == '+')
		nb = (base_str(&nbr[1], base_from, i));
	else
		nb = (base_str(nbr, base_from, i));
	i = 0;
	while (base_to[i] != '\0')
		++i;
	return (finish_him(nb, i, str, base_to));
}

char	*finish_him(unsigned int nb, unsigned int i, char *str, char *base_to)
{
	unsigned int	x;

	x = 0;
	while (nb >= i)
	{
		str[x++] = base_to[(nb % i)];
		nb = nb / i;
	}
	str[x++] = base_to[(nb % i)];
	str[x] = '\0';
	return ((str = ft_strrev(str)));
}
