/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:30:30 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/11 12:39:39 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *src, const char *dest, size_t n)
{
	size_t	counter;

	counter = 0;
	while ((counter < n) && (src[counter] == dest[counter])
		&& src[counter] != '\0' && dest[counter] != '\0')
	{
		counter++;
	}
	return (src[counter] - dest[counter]);
}

// int main()
// {
// 	char src[] = "A123";
// 	char dest[] = "A";
// 	printf("%d\n", ft_strncmp(src, dest, 11));
// 	return (0);
// }
