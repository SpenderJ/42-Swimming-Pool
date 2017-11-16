/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 22:37:51 by juspende          #+#    #+#             */
/*   Updated: 2017/07/10 22:15:52 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		my_error(char *str, char *base)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (!(base) || !(str) || base[0] == '\0' || base[1] == '\0')
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

int		my_error2(char *str, char *base)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		n = 0;
		while (base[n] != '\0' && n != -1)
		{
			if (base[n] == str[i] || str[i] == '+'\
							|| str[i] == '-')
				n = -1;
			else
				n = n + 1;
		}
		if (n != -1)
			return (84);
		i = i + 1;
	}
	return (0);
}

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

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (str[0] == '\0')
		return (0);
	if (my_error(str, base) == 84)
		return (0);
	if (my_error2(str, base) == 84)
		return (0);
	while (base[i] != '\0')
		i = i + 1;
	if (str[0] == '-')
		return ((base_str(&str[1], base, i)) * -1);
	else if (str[0] == '+')
		return (base_str(&str[1], base, i));
	return (base_str(str, base, i));
}
