/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siangulo <siangulo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:17:26 by siangulo          #+#    #+#             */
/*   Updated: 2022/11/23 20:05:11 by siangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	x;

	x = 1;
	while (nb > 0)
	{
		x *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (x);
}
/*
int	main(void)
{
	printf( "%i", ft_iterative_factorial(4);
}*/
