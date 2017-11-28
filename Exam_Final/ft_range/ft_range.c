/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 10:28:48 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 10:42:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	long	n;
	int		i;
	int		*final;

	if (start >= end)
	{
		n = end;
		i = 0;
		if ((final = malloc(sizeof(int) * (start - end + 1))) == NULL)
			return (0);
		while (n <= start)
			final[i++] = n++;
		return (final);
	}
	else if (end > start)
	{
		i = 0;
		n = start;
		if ((final = malloc(sizeof(int) * (end - start + 1))) == NULL)
			return (0);
		while (n <= end)
			final[i++] = n++;
		return (final);
	}
	return (0);
}
