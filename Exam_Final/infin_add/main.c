/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 12:44:41 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 14:01:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return ;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

char	*ft_revstr(char *s1)
{
	int		i;
	int		a;
	char	*str;

	i = 0;
	a = 0;
	while (s1[i] != '\0')
		++i;
	if ((str = malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	--i;
	while (i >= 0)
	{
		str[a] = s1[i];
		i--;
		++a;
	}
	str[a] = '\0';
	return (str);
}

void	soustraction(char *s1, char *s2)
{
	int		c1;
	int		c2;
	int		res;
	int		ret;
	char	*str;
	int		a;
	int		neg;

	if ((str = malloc(sizeof(char) * 4096)) == NULL)
		return ;
	res = 0;
	c1 = 0;
	a = 0;
	neg = 0;
	c2 = 0;
	ret = 0;
	while (s1[c1] != '\0')
		++c1;
	--c1;
	while (s2[c2] != '\0')
		++c2;
	--c2;
	while (c1 >= 0 || c2 >= 0)
	{
		if (c1 < 0)
		{
			res = (s2[c2] - 48);
			neg = 1;
		}
		else if (c2 < 0)
			res = s1[c1] - 48;
		else
			res = (s1[c1] - 48) - (s2[c2] - 48);
		if (res < 0)
		{
			res = res + 10;
			if (s2[c2 - 1] < '0' || s2[c2 - 1] > '9')
				s1[c1 - 1] = s1[c1 - 1] - 1;
			else
				s2[c2 - 1] = s2[c2 - 1] + 1;
		}
		str[a++] = res + 48;
		--c1;
		--c2;
	}
	str[a] = '\0';
	if (neg == 1)
		ft_putchar('-');
	str = ft_revstr(str);
	ft_putstr(str);
	ft_putchar('\n');
}

void	addition(char *s1, char *s2)
{
	int		c1;
	int		c2;
	int		res;
	int		ret;
	char	*str;
	int		a;

	if ((str = malloc(sizeof(char) * 4096)) == NULL)
		return ;
	res = 0;
	c1 = 0;
	a = 0;
	c2 = 0;
	ret = 0;
	while (s1[c1] != '\0')
		++c1;
	--c1;
	while (s2[c2] != '\0')
		++c2;
	--c2;
	while (c1 >= 0 || c2 >= 0)
	{
		if (c1 < 0)
			res = s2[c2] - 48;
		else if (c2 < 0)
			res = s1[c1] - 48;
		else
			res = (s1[c1] - 48) + (s2[c2] - 48);
		if (ret == 1)
			res = res + 1;
		ret = 0;
		if (res >= 10)
		{
			res = res - 10;
			ret = 1;
		}
		str[a++] = res + 48;
		--c1;
		--c2;
	}
	if (ret == 1)
		str[a++] = '1';
	str[a] = '\0';
	str = ft_revstr(str);
	ft_putstr(str);
	ft_putchar('\n');
}

int		ft_cmp(char *s1, char *s2)
{
	int		c1;
	int		c2;
	int		i;

	c2 = 0;
	i = 0;
	c1 = 0;
	while (s1[c1] != '\0')
		++c1;
	while (s2[c2] != '\0')
		++c2;
	if (c1 != c2)
		return (c1 - c2);
	c1--;
	c1 = 0;
	while (s1[c1] != '\0')
	{
		if (s1[c1] != s2[c1])
			return (s1[c1] - s2[c1]);
		c1++;
	}
	return (0);
}
int		main(int argc, char **argv)
{
	int		s1;
	int		s2;
	int		i;
	int		neg1;
	int		neg2;

	i = 0;
	s1 = 0;
	s2 = 0;
	neg1 = 0;
	neg2 = 0;
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	if (argv[1][s1] == '-')
	{
		neg1 = -1;
		++s1;
	}
	if (argv[2][s2] == '-')
	{
		neg2 = -1;
		++s2;
	}
	if (neg1 == 0 && neg2 == 0)
		addition(argv[1], argv[2]);
	else if (neg1 == -1 && neg2 == -1)
	{
		ft_putchar('-');
		addition(&argv[1][s1], &argv[2][s2]);
	}
	else if (neg1 == -1 && neg2 == 0)
	{
		if (ft_cmp(&argv[1][s1], argv[2]) >= 0)
		{
			ft_putchar('-');
			soustraction(&argv[1][s1], argv[2]);
		}
		else
			soustraction(argv[2], &argv[1][s1]);
	}
	else if (neg1 == 0 && neg2 == -1)
	{
		if (ft_cmp(&argv[2][s2], argv[1]) >= 0)
		{
			ft_putchar('-');
			soustraction(&argv[2][s2], argv[1]);
		}
		else
			soustraction(argv[1], &argv[2][s2]);
	}
	return (0);
}
