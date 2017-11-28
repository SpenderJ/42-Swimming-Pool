/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 11:40:09 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 11:58:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		done_before(char *str, int i)
{
	int		n;

	n = 0;
	while (n < i)
	{
		if ((str[n] == str[i]) || (str[n] <= 'Z' && str[n] >= 'A' && str[n] + 32 == str[i]) || (str[n] <= 'z' && str[n] >= 'a' && str[n] - 32 == str[i]))
			return (1);
		++n;
	}
	return (0);
}

void	count(char *str, int i)
{
	char	c;
	int		nbr;

	c = str[i];
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	i = 0;
	nbr = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c || str[i] + 32 == c)
			nbr++;
		++i;
	}
	printf("%d%c", nbr, c);
}

int		main(int argc, char **argv)
{
	int		i;
	int		n;
	int		nbr;

	i = 0;
	n = 0;
	nbr = 0;
	if (argc != 2 || argv[1] == NULL || argv[1][0] == '\0')
	{
		printf("\n");
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if ((argv[1][i] <= 'Z' && argv[1][i] >= 'A') || (argv[1][i] <= 'z' && argv[1][i] >= 'a'))
		{
			if (done_before(argv[1], i) == 0)
			{
				if (nbr != 0)
					printf(", ");
				count(argv[1], i);
				nbr = nbr + 1;
			}
		}
		++i;
	}
	printf("\n");
	return (0);
}
