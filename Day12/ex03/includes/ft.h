/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:12:33 by juspende          #+#    #+#             */
/*   Updated: 2017/11/07 14:30:33 by juspende         ###   ########.fr       */
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

void		print_end(int i);
char		*ft_putnbr_base2(int nbr, char *base);
int			ft_strncmp(char *s1, char *s2, unsigned int i);
void		ft_putnbr(int c);
int			ft_atoi(char *str);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			main(int argc, char **argv);
int			ft_putsterr(char *str);
int			base_str(char *str, char *base, int n);
char		*finish_him(unsigned int n, unsigned int i, char *s, char *b);
char		*ft_strrev(char *str);
char		*ft_convert_base(char *nbr, char *base_from, char *base_to);
void		print_hexa(char c);
void		print_9_digits(int c);
void		print_normal(char *file);
void		ft_putnbr_base(int nbr, char *base);

#endif
