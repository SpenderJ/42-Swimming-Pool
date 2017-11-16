/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 09:32:21 by juspende          #+#    #+#             */
/*   Updated: 2017/07/12 17:29:22 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct				s_stock_par
{
	int						size_param;
	char					*str;
	char					*copy;
	char					**tab;
}							t_stock_par;

struct s_stock_par			*ft_param_to_tab(int ac, char **av);
void						ft_putchar(char c);

#endif
