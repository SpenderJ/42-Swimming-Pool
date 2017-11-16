/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:12:33 by juspende          #+#    #+#             */
/*   Updated: 2017/07/17 08:45:29 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_opp
{
	char			*sign;
	int				(*op)(int, int);
}					t_opp;

# define OPPNUMBER 6

int					ft_usage(int n1, int n2);
int					ft_mul(int n1, int n2);
int					ft_div(int n1, int n2);
int					ft_mod(int n1, int n2);
int					ft_sub(int n1, int n2);
int					ft_add(int n1, int n2);
int					ft_strcmp(char *s1, char *s2);
void				ft_opp(char *op, int n1, int n2);
void				ft_putchar(char c);
void				ft_putstr(char *str);
int					ft_atoi(char *str);
void				ft_putnbr(int nb);
int					main(int argc, char **argv);

#endif
