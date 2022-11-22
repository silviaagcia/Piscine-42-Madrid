/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siangulo <siangulo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:35:14 by siangulo          #+#    #+#             */
/*   Updated: 2022/11/20 23:50:18 by siangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signo;
	int	valor;

	i = 0;
	signo = 0;
	valor = 0;
	while (str[i] == '\t' || str [i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signo++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		valor = (valor * 10) + str[i] - 48;
		i++;
	}
	if ((signo % 2) != 0)
		return (-valor);
	else
		return (valor);
}
/*
int	main(void)
{
	char str[] = "   --+-+1234lksjdfg srjf";
	printf("%d", ft_atoi(str));
	return (0);
}
*/
