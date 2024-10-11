/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:04:15 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/11 12:11:08 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] == c)
			return ((char *)&str[counter]);
		counter++;
	}
	return (0);
}

// int main()
// {
// 	char str[] = "Hello World!";

// 	printf("%s\n", ft_strchr(str, 'W'));
// 	return (0);
// }