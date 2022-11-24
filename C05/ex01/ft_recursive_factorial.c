/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siangulo <siangulo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:48:54 by siangulo          #+#    #+#             */
/*   Updated: 2022/11/23 20:03:30 by siangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb > 0)
	{
		x *= nb * ft_recursive_factorial(nb -1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (x);
}
