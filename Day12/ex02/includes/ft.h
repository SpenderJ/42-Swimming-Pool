/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:12:33 by juspende          #+#    #+#             */
/*   Updated: 2017/07/18 04:51:38 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <string.h>
# include <errno.h>
# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define SIZEOFBUFFER 4096

# define SIZEOFFILE 4096

int					ft_atoi(char *str);
void				ft_print_tail(char *file, int argc, char **argv, int i);
void				ft_putchar(char c);
void				ft_putstr(char *str);
int					main(int argc, char **argv);
int					ft_putsterr(char *str);

#endif
