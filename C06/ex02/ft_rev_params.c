/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siangulo <siangulo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:10:35 by siangulo          #+#    #+#             */
/*   Updated: 2022/11/22 22:53:02 by siangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **str)
{
	int	i;
	int	j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (str[i][j] != '\0' && argc)
		{
			ft_putchar(str[i][j]);
			j++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
