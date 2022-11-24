/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siangulo <siangulo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:36:27 by siangulo          #+#    #+#             */
/*   Updated: 2022/11/22 13:47:59 by siangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **str)
{
	int	i;

	i = 0;
	while (str[0][i] != '\0' && argc)
	{
		ft_putchar(str[0][i]);
		++i;
	}
	ft_putchar('\n');
	return (0);
}
