/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 13:34:26 by juspende          #+#    #+#             */
/*   Updated: 2017/07/05 14:32:41 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	w;
	int	t;

	w = 1;
	while (w != 0)
	{
		i = 0;
		while (i < size && w != 2)
		{
			if (i != 0 && tab[i - 1] > tab[i])
			{
				t = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = t;
				w = 2;
			}
			else
				i = i + 1;
		}
		if (w != 2)
			w = 0;
		else
			w = 1;
	}
}
