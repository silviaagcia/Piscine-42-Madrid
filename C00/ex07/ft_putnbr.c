/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siangulo <siangulo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:07:35 by siangulo          #+#    #+#             */
/*   Updated: 2022/11/08 18:27:42 by siangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div(int x)
{
	x = x + '0';
	write(1, &x, 1);
}

void	ft_putnbr(int nb)
{	
	int	pos;

	if (nb > 9)
	{
		nb = (nb / 10);
		ft_putnbr(nb);
		nb = (nb % 10);
		ft_div(nb);
	}
	else if (nb < 0)
	{
		pos = (nb * -1);
		write(1, "-", 1);
		ft_putnbr(pos);
	}
	else if (nb <= 9)
	{
		ft_div(nb);
	}
}
