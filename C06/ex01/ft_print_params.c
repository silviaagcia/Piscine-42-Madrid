/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siangulo <siangulo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:51:37 by siangulo          #+#    #+#             */
/*   Updated: 2022/11/23 12:13:20 by siangulo         ###   ########.fr       */
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

	j = 1;
	while (argc > j)
	{
		i = 0;
		while (str[j][i] != '\0')
		{
			ft_putchar(str[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
