/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 06:30:45 by juspende          #+#    #+#             */
/*   Updated: 2017/07/11 09:14:33 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		a;

	i = 0;
	a = 1;
	while (argv[0][i] != '\0')
	{
		ft_putchar(argv[0][i]);
		++i;
	}
	ft_putchar('\n');
	while (argc != 0)
		argc = argc - a;
	return (argc);
}
