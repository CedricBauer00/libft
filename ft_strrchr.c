/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:04:15 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/18 14:54:40 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	counter;
	char	*i;

	i = NULL;
	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] == (char)c)
			i = (char *)(str + counter);
		counter++;
	}
	if (c == '\0')
		return ((char *)(str + counter));
	return (i);
}

// int main()
// {
// 	char *test = "hello worl";

// 	printf("%s\n", ft_strrchr(test, 'l'));

// 	return 0;
// }