/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:03:02 by juspende          #+#    #+#             */
/*   Updated: 2017/07/07 15:46:19 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	show_me_your_skill(int a)
{
	unsigned int	i;

	if (a < 0)
	{
		ft_putchar('-');
		i = -a;
	}
	else
		i = a;
	if (i > 9)
	{
		show_me_your_skill(i / 10);
		show_me_your_skill(i % 10);
	}
	else
		ft_putchar(i + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a;
		while (++b <= 99)
		{
			if (a < 10)
				ft_putchar('0');
			show_me_your_skill(a);
			ft_putchar(' ');
			if (b < 10)
				ft_putchar('0');
			show_me_your_skill(b);
			if (a != 98 || b != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		a++;
	}
}
