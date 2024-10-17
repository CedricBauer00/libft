/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:00:27 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/17 17:06:46 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_test(char *s1, const char set)
{
	size_t	counter;
	
	counter = 0;
	while (s1[counter] != '\0')
	{
		if (s1[counter] == set)
		{
			s1[counter] = 0;
		}
		counter++;
	}
	return (s1);
}

int main()
{
	char s1[] = "adadadadad";
	printf("%s\n", ft_test(s1, 'a'));
	return (0);
}