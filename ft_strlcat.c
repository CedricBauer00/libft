/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:08:03 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/10 11:31:18 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *src, char *dest, unsigned int len)
{
	unsigned int counter;
	unsigned int i;

	counter = 0;
	i = 0;

	while (dest[counter] != '\0')
		counter++;
	while(src[i] != '\0' && i < len)
	{
		dest[counter + i] = src[i];
		i++;
	}
	return (*src + *dest);
}

int main()
{
	char src[] = "ASD";
	char dest[] = "asd";
	
	printf("%d\n", ft_strlcat(src, dest, 10));
	return (0);
}