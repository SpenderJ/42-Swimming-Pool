/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 16:20:02 by juspende          #+#    #+#             */
/*   Updated: 2017/07/16 18:54:57 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SEPARATOR ('*')

#define END_STR ('\0')

#define SUCCESS (0)

#define END_OF_THE_FUNC (1)

int		match(char *s1, char *s2)
{
	if (*s2 == SEPARATOR)
	{
		if (*s1 != SUCCESS)
			return (match(s1 + 1, s2) || match(s1, s2 + 1));
		else
			return (match(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		if (*s1 != SUCCESS)
			return (match(s1 + 1, s2 + 1));
		else
			return (END_OF_THE_FUNC);
	}
	return (SUCCESS);
}
