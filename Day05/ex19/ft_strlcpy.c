/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 21:50:23 by juspende          #+#    #+#             */
/*   Updated: 2017/07/10 16:30:19 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
		++count;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (count);
}
