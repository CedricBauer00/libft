/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:08:03 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/15 17:30:20 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int counter;
	unsigned int i;

	counter = 0;
	i = 0;

	while (dst[counter] != '\0')
		counter++;
	while(src[i] != '\0' && i < dstsize)
	{
		dst[counter + i] = src[i];
		i++;
	}
	return (*src + *dst);
}

// int main()
// {
// 	char src[] = "ASD";
// 	char dest[] = "asd";
	
// 	printf("%d\n", ft_strlcat(src, dest, 10));
// 	return (0);
// }