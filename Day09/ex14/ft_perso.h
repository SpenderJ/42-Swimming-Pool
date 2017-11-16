/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 03:46:31 by juspende          #+#    #+#             */
/*   Updated: 2017/07/14 04:00:33 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <stdlib.h>
# include <string.h>

# define SAVE_THE_WORLD	strdup("Working at Bocal")

typedef struct		s_perso
{
	char			*name;
	float			life;
	unsigned int	age;
	char			*profession;
}					t_perso;

#endif
