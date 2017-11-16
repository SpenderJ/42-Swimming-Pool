/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 01:20:26 by juspende          #+#    #+#             */
/*   Updated: 2017/07/26 10:36:08 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static char	*str_error(int errsv)
{
	if (errsv == EACCES)
		return ("Permission denied\n");
	if (errsv == EISDIR)
		return ("Is a directory\n");
	if (errsv == ENOENT)
		return ("No such file or directory\n");
	else
		return ("Permission denied\n");
}

int			ft_atoi(char *str)
{
	int		i;
	int		a;
	int		c;
	int		d;

	a = 0;
	i = -1;
	c = 1;
	d = 0;
	while (str[++i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			++a;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		d = (d * c) + (str[i] - 48);
		c = 10;
		i = i + 1;
	}
	if (a == 0)
		return (d);
	else if (a == 1)
		return (-d);
	return (0);
}

void		ft_print_tail(char *file, int argc, char **argv, int i)
{
	int		n;
	int		nbr;

	n = -1;
	if ((nbr = ft_atoi(argv[2])) <= 0)
		nbr = -nbr;
	if (argc > 4)
	{
		if (i >= 4)
			ft_putchar('\n');
		ft_putstr("==> ");
		ft_putstr(argv[i]);
		ft_putstr(" <==\n");
	}
	while (file[++n] != '\0')
		;
	--n;
	while (--nbr > 0 && n > 0)
		n--;
	ft_putstr(&file[n]);
}

int			main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	*file;
	int		errsv;
	int		i;

	i = 2;
	if (argc < 3)
		return (0);
	while (argv[++i] != NULL && (file = NULL) == NULL)
	{
		file = malloc(sizeof(char) * (SIZEOFBUFFER * SIZEOFFILE));
		if (((fd = open(argv[i], O_RDONLY)) == -1 ||\
					(ret = read(fd, file, 32789)) == -1) && argc >= 2)
		{
			errsv = errno;
			if (ft_putsterr("tail") == 0 && ft_putsterr(": ") == 0 &&\
					ft_putsterr(argv[i]) == 0 && ft_putsterr(": ") == 0)
				ft_putsterr(str_error(errsv));
		}
		else
			ft_print_tail(file, argc, argv, i);
	}
	return (0);
}
