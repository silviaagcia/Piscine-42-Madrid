/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siangulo <siangulo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:50:33 by siangulo          #+#    #+#             */
/*   Updated: 2022/11/16 11:31:45 by siangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str [i] >= 32 && str[i] <= 126)
		i++;
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char	str[] = "¿";
	printf("%d", ft_str_is_printable(str));
	} 
	*/
