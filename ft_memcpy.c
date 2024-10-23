/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:43:43 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/23 16:48:06 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				counter;
	unsigned char		*buffer;
	const unsigned char	*source;

	source = (const unsigned char *)src;
	buffer = (unsigned char *)dst;
	counter = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (counter < n)
	{
		buffer[counter] = source[counter];
		counter++;
	}
	return (dst);
}

// int main()
// {
// 	char dst[10];
// 	char src[] = "asdfgfff";
// 	ft_memcpy(dst, src, 5);
// 	printf("%s\n", dst);
// 	return (0);
// }

// void	*ft_memcpy(void *dst, const void *src, size_t n)
// {
// 	size_t	counter;
// 	unsigned char	*destination;
// 	const unsigned char *source;

// 	destination = (unsigned char *)dst;
// 	source = (const unsigned char *)src;
// 	counter = 0;
// 	if (dst == 0 && src == 0)
// 		return (0);
// 	while (counter < n)
// 	{
// 		destination[counter] = source[counter];
// 		counter++;
// 	}
// 	return (dst);
// }