/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 01:20:26 by juspende          #+#    #+#             */
/*   Updated: 2017/07/20 23:01:53 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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

static void	move_to_next_str(char *str, int *i)
{
	int		n;

	n = 0;
	if (ft_strncmp(&str[n], "                ", 16) == 0)
	{
		while (ft_strncmp(&str[n], "                ", 16) == 0)
			n = n + 16;
		*i = *i + n;
		return ;
	}
	else
	{
		while (ft_strncmp(&str[n], "****************", 16) == 0)
			n = n + 16;
		*i = *i + n - 16;
		return ;
	}
	return ;
}

void		hexdump(char *file)
{
	int		i;
	int		count;
	int		a;

	count = 0;
	i = 0;
	while (file[i] != '\0')
	{
		a = 0;
		print_9_digits(count);
		while (a < 8)
			print_hexa(file[i + a++]);
		ft_putstr(" ");
		while (a < 16)
			print_hexa(file[i + a++]);
		print_normal(&file[i]);
		if (ft_strncmp(&file[i], "                ", 16) == 0 ||\
				ft_strncmp(&file[i], "****************", 16) == 0)
			move_to_next_str(&file[i], &i);
		a = i;
		while (file[++i] != '\0' && i - a != 16)
			;
		count = count + 1;
	}
	print_end(i);
}

static char	*se(int errsv, char *str)
{
	if (errsv == EACCES)
		return ("Permission denied\n");
	if (errsv == EISDIR)
		return ("Is a directory\n");
	if (errsv == ENOENT)
	{
		ft_putsterr("No such file or directory\n");
		ft_putsterr("hexdump");
		ft_putsterr(": ");
		ft_putsterr(str);
		ft_putsterr(": ");
		return ("Bad file descriptor\n");
	}
	else
		return ("Permission denied\n");
}

int			main(int argc, char **av)
{
	int		fd;
	int		ret;
	char	*file;
	int		er;
	int		i;

	i = 1;
	file = malloc(sizeof(char) * (SIZEOFBUFFER * SIZEOFFILE));
	if (argc < 3)
		return (0);
	while (av[++i] != NULL && (file = NULL) == NULL && argc >= 2)
	{
		file = malloc(sizeof(char) * (SIZEOFBUFFER * SIZEOFFILE));
		if (((fd = open(av[i], O_RDONLY)) == -1 ||\
					(ret = read(fd, file, 32789)) == -1) && argc >= 2)
			if ((er = errno) != -3 && ft_putsterr("hexdump") == 0 &&\
					ft_putsterr(": ") == 0 && ft_putsterr(av[i]) == 0 &&\
					ft_putsterr(": ") == 0 && (ft_putsterr(se(er, av[i])) != 7))
				;
		if (fd != -1 && ret != -1)
			hexdump(file);
	}
	return (0);
}
