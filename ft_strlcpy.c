/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:21:44 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/15 19:51:58 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	counter;

	counter = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (counter + 1 < dstsize && src[counter])
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}

// #include <stdio.h>

// int main()
// {
// 	char src[] = "abcde";
// 	char dest[] = "hahahah";
// 	char test[] = "hahahah";

// 	int len; 

// 	len = 10;
// 	printf("%d\n", ft_strlcpy(src, dest, len));
// 	printf("%s\n", dest);
// }

// int main()
// {
// 	char src[] = "isws";
// 	char dest[] = "127";

// 	printf("%d\n", ft_strlcpy(src, dest, 13));
// 	printf("%s\n", dest);
// 	return (0);
// }
