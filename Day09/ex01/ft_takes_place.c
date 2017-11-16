/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:12:30 by juspende          #+#    #+#             */
/*   Updated: 2017/07/14 11:43:16 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place2(int hour)
{
	if (hour == 13)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 01.00 P.M. AND 02.00 P.M.\n");
	if (hour == 14)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 02.00 P.M. AND 03.00 P.M.\n");
	if (hour == 15)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 03.00 P.M. AND 04.00 P.M.\n");
	if (hour == 16)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 04.00 P.M. AND 05.00 P.M.\n");
	if (hour == 17)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 05.00 P.M. AND 06.00 P.M.\n");
	if (hour == 18)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 06.00 P.M. AND 07.00 P.M.\n");
	if (hour == 19)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 07.00 P.M. AND 08.00 P.M.\n");
	if (hour == 20)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 08.00 P.M. AND 09.00 P.M.\n");
	if (hour == 21)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 09.00 P.M. AND 10.00 P.M.\n");
	if (hour == 22)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 10.00 P.M. AND 11.00 P.M.\n");
	if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M.\n");
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 01.00 A.M.\n");
}

void	ft_takes_place(int hour)
{
	if (hour == 1)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 01.00 A.M. AND 02.00 A.M.\n");
	if (hour == 2)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 02.00 A.M. AND 03.00 A.M.\n");
	if (hour == 3)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 03.00 A.M. AND 04.00 A.M.\n");
	if (hour == 4)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 04.00 A.M. AND 05.00 A.M.\n");
	if (hour == 5)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 05.00 A.M. AND 06.00 A.M.\n");
	if (hour == 6)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 06.00 A.M. AND 07.00 A.M.\n");
	if (hour == 7)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 07.00 A.M. AND 08.00 A.M.\n");
	if (hour == 8)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 08.00 A.M. AND 09.00 A.M.\n");
	if (hour == 9)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 09.00 A.M. AND 10.00 A.M.\n");
	if (hour == 10)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 10.00 A.M. AND 11.00 A.M.\n");
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.\n");
	if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 01.00 P.M.\n");
	ft_takes_place2(hour);
}
