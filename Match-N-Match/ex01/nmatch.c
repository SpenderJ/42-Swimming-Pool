/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 05:16:16 by juspende          #+#    #+#             */
/*   Updated: 2017/07/16 18:51:35 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SEPARATOR ('*')

#define END_STR ('\0')

#define SUCCESS (0)

#define END_OF_THE_FUNC (1)

int		nmatch(char *s1, char *s2)
{
	if (*s2 == SEPARATOR)
	{
		if (*s1 != SUCCESS)
			return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
		else
			return (nmatch(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		if (*s1 != SUCCESS)
			return (nmatch(s1 + 1, s2 + 1));
		else
			return (END_OF_THE_FUNC);
	}
	return (SUCCESS);
}
