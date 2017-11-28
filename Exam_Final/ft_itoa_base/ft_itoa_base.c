/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 11:14:17 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 11:37:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_base(int value, int base)
{
	char	*str;
	long	nbr;
	int		i;
	char	*bas;
	char	*final;
	int		neg;

	neg = 1;
	i = 0;
	nbr = value;
	if (base < 2 || base > 16)
		return (NULL);
	if ((bas = malloc(sizeof(char) * 17)) == NULL)
		return (NULL);
	if ((str = malloc(sizeof(char) * 4096)) == NULL)
		return (NULL);
	bas = "0123456789ABCDEF";
	if (nbr < 0)
	{
		neg = -1;
		nbr = nbr * -1;
	}
	while (nbr >= 1)
	{
		str[i] = bas[nbr % base];
		nbr = nbr / base;
		++i;
		str[i] = '\0';
	}
	if (value == 0)
		str[i++] = '0';
	if (neg == -1 && base == 10)
		str[i++] = '-';
	str[i] = '\0';
	if ((final = malloc(sizeof(char) * 4096)) == NULL)
		return (NULL);
	--i;
	neg = 0;
	while (i >= 0)
	{
		final[neg] = str[i];
		--i;
		++neg;
	}
	final[neg] = '\0';
	return (final);
}
