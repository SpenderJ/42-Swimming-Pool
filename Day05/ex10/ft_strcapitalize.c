/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:40:39 by juspende          #+#    #+#             */
/*   Updated: 2017/07/06 14:14:22 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||\
					(str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||\
					(str[i - 1] >= '0' && str[i - 1] <= '9')) &&\
				(str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if ((str[i - 1] < 48 || str[i - 1] > 122 ||\
					(str[i - 1] > 'Z' && str[i - 1] < 'a') ||\
					(str[i - 1] > 'z' && str[i - 1] < '0')) &&\
				str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		++i;
	}
	return (str);
}
