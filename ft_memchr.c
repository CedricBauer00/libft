/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:38:53 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/21 16:14:47 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*string;
	size_t					counter;

	string = (const unsigned char *)s;
	counter = 0;
	while (counter < n)
	{
		if (string[counter] == (unsigned char)c)
		{
			return ((void *)(&string[counter]));
		}
		counter++;
	}
	return (NULL);
}
// int main()
// {
// 	char	str[] = "aasdasFFffdasd";
// 	printf("%s\n", ft_memchr(str, 'F', 10));
// 	return (0);
// }

// char	ft_itoa(int n)
// {
// 	char	*intrep;
// 	int		res;
// 	int counter;

// 	res = n;
// 	while (n != 0)
// 	{
// 		n = n / 10;
// 		counter++;
// 	}
// 	// if (res < 0)
// 	// 	counter++;		??
// 	intrep = (char *)malloc((counter + 1) * sizeof(char));
// 	if (!intrep)
// 		return (0);
// 	if (!intrep)
// 		return (0);
// 	if (res < 0)
// 	{
// 		res = -res;
// 		intrep[0] = '-';
// 	}
// 	n = res;
// 	intrep[counter] = '\0';
// 	counter--;
// 	while (n > 0)
// 	{
// 		intrep[counter] = (n % 10) + '0';
// 		counter--;
// 		n = n / 10;
// 	}
// 	return (0);
// }