/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siangulo <siangulo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:39:45 by siangulo          #+#    #+#             */
/*   Updated: 2022/11/21 15:56:28 by siangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
		j++;
		}
	i++;
	}
	return (0);
}
/*	
int	main(void)
{
	char	str[] = "eres un pesado";
	char	to_find[] = "ut";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}
*/
