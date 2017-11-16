/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:12:33 by juspende          #+#    #+#             */
/*   Updated: 2017/07/23 18:37:32 by juspende         ###   ########.fr       */
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
# include <stdio.h>

# define SIZEOFBUFFER 10

void				ft_putchar(char c);
int					ft_putstr(char *str);
void				ft_putnbr(int nb);
int					tab_len(char **tab);
int					ft_strlen(char *str);
int					main(void);
int					tab_comparator(char **tab1, char **tab2);
int					ft_putsterr(char *str);
char				*ft_strdup(char *str);
char				**sastantua(int size);
char				**rush00(int x, int y);
char				**rush01(int x, int y);
char				**rush02(int x, int y);
char				**rush03(int x, int y);
char				**rush04(int x, int y);
char				**carre(int size);
char				**rectangle(int x, int y);
char				**triangle(int base);
char				**reverse_sastantuah(int size);
char				**losange(int base);
char				**losange_inverse(int size);
char				**carre_inverse(int size);
char				**rectangle_inverse(int x, int y);
char				**triangle_inverse(int base);
char				**rond_inverse(int size);
char				**get_map(void);
int					is_basic_form(char **tab, int solnumber);

#endif
