/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 03:46:31 by juspende          #+#    #+#             */
/*   Updated: 2017/07/14 13:36:55 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define CLOSE (1)

# define OPEN (0)

# define TRUE (0)

# ifndef EXIT_SUCCESS
#  define EXIT_SUCCESS (0)
# endif

typedef unsigned char	t_bool;

typedef struct			s_door
{
	int					state;
}						t_door;

t_bool					is_door_close(t_door *door);
t_bool					close_door(t_door *door);
t_bool					is_door_open(t_door *door);
t_bool					open_door(t_door *door);

#endif
