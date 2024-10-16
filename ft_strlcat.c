/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:08:03 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/16 12:42:53 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	counter;
// 	size_t	i;

// 	counter = 0;
// 	i = 0;

// 	while (dst[counter] != '\0')
// 		counter++;
// 	while(src[i] != '\0' && i < dstsize)
// 	{
// 		dst[counter + i] = src[i];
// 		i++;
// 	}
// 	dst[counter + 1] = '\0';
// 	return (ft_strlen(dst) + ft_strlen(src));
// }


// size_t	ft_strlen(const char *str)
// {
// 	int	counter;

// 	counter = 0;
// 	while (str[counter] != '\0')
// 		counter++;
// 	return (counter);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);

	counter = 0;
	i = 0;

	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (dst[counter] != '\0')
		counter++;
	while (i < dstsize && src[i] != '\0')
	{
		dst[counter + i] = src[i];
		i++;
	}

	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

int main()
{
	char src[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char dest[] = "there is no stars in the sky";
	size_t max = ft_strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	
	printf("%zu\n", ft_strlcat(src, dest, max));
	printf("%lu\n", strlcat(src, dest, max));
	return (0);
}
