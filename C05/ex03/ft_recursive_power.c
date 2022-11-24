/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siangulo <siangulo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:02:15 by siangulo          #+#    #+#             */
/*   Updated: 2022/11/23 18:05:23 by siangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power -1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (x);
}
