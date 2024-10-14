/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:21:44 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/14 15:06:15 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcpy(char *src, char *dest, unsigned int len)
{
	unsigned int	counter;

	counter = 0;
	if (len == 0)
		return (ft_strlen(src));
	while (counter + 1 < len && src[counter])
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (ft_strlen(src) + ft_strlen(dest));
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

int main()
{
	char src[] = "isws";
	char dest[] = "127";

	printf("%d\n", ft_strlcpy(src, dest, 13));
	printf("%s\n", dest);
	return (0);
}
