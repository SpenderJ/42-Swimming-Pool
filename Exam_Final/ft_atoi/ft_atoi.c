/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 10:19:54 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 10:27:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	long	res;
	long	i;
	long	neg;
	int		final;

	i = 0;
	res = 0;
	neg = 1;
	if (str[i] == '-')
	{
		neg = -1;
		++i;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 + (str[i] - 48);
		++i;
	}
	if (res != 0)
		res = res * neg;
	final = res;
	return (final);
}
