/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:26:52 by juspende          #+#    #+#             */
/*   Updated: 2017/07/13 10:39:53 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# ifndef EVEN_MSG
#  define EVEN_MSG	"I have an even number of arguments.\n"
# endif

# ifndef ODD_MSG
#  define ODD_MSG	"I have an odd number of arguments.\n"
# endif

# ifndef SUCCESS
#  define SUCCESS (0)
# endif

# ifndef EVEN
#  define EVEN(nbr) (((nbr) % 2) == 0)
# endif

# ifndef TRUE
#  define TRUE (1)
# endif

# ifndef FALSE
#  define FALSE (0)
# endif

# include <unistd.h>

typedef unsigned char	t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);
int		main(int argc, char **argv);

#endif
