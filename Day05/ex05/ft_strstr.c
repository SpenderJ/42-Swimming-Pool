/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 08:55:36 by juspende          #+#    #+#             */
/*   Updated: 2017/07/09 11:19:30 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *c1, char *c2)
{
	int	i;

	i = 0;
	while (c1[i] != '\0' && c2[i] != '\0')
	{
		if (c1[i] != c2[i])
			return (1);
		i = i + 1;
	}
	if (c1[i] == '\0' && c2[i] != '\0')
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if ((!to_find) || to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (ft_strcmp(&str[i], to_find) == 0)
			return (&str[i]);
		i = i + 1;
	}
	return (0);
}
