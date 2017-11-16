/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 01:20:26 by juspende          #+#    #+#             */
/*   Updated: 2017/07/20 22:30:41 by juspende         ###   ########.fr       */
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

int			main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buffer[30000];
	int		errsv;
	int		i;

	if ((i = 0) != -1 && argc < 2)
		while ((ret = read(0, buffer, 30000)) > 0)
			if ((buffer[ret] = '\0') != -1)
				ft_putstr(buffer);
	while (argv[++i] != NULL && argc >= 2)
	{
		if (((fd = open(argv[i], O_RDONLY)) == -1 ||\
				(ret = read(fd, buffer, 30000)) == -1) && argc >= 2)
		{
			errsv = errno;
			if (ft_putsterr("cat") == 0 && ft_putsterr(": ") == 0 &&\
					ft_putsterr(argv[i]) == 0 && ft_putsterr(": ") == 0)
				ft_putsterr(str_error(errsv));
		}
		else if ((buffer[ret] = '\0') != -1)
			ft_putstr(buffer);
	}
	return (0);
}
