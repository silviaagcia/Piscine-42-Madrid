/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siangulo <siangulo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:49:44 by siangulo          #+#    #+#             */
/*   Updated: 2022/11/08 18:23:00 by siangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_numbers( int x, int y, int z, int k)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, " ", 1);
	write(1, &z, 1);
	write(1, &k, 1);
	if (k != '9')
		write(1, ", ", 2);
	else if (z != '9')
		write(1, ", ", 2);
	else if (y != '8')
		write(1, ", ", 2);
	else if (x != '9')
		write(1, ", ", 2);
}	

void	second_pair( int z, int k)
{
	int	x;
	int	y;

	z = x;
	while (z <= '9')
	{
		k = y + 1;
		while (k <= '9')
		{
			print_numbers(x, y, z, k);
		k++;
		}	
	z++;
	}
}

void	ft_print_comb2(void)
{
	x = '0';
	while (x <= '9')
	{
		y = '0';
		while (y <= '9')
		{
			second_pair(x, y);
			y++;
		}
	}
	x++;
}
