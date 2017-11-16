/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:15:29 by juspende          #+#    #+#             */
/*   Updated: 2017/11/12 02:03:17 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	look_at_me(int a, int b, int c)
{
	a = a + 48;
	b = b + 48;
	c = c + 48;
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a - 48 == 7 && b - 48 == 8 && c - 48 == 9)
		a = c;
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b < 10)
		{
			c = b + 1;
			while (c < 10)
			{
				look_at_me(a, b, c);
				++c;
			}
			++b;
		}
		++a;
	}
}

int		main(int argc, char **argv)
{
	ft_print_comb();
	return (0);
}
