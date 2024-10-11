/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer <cbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:04:15 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/08 15:51:45 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*strchr(const char *str, int c)
{
	int	counter;
	int i = 0;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] == c)
			i = counter;
		counter++;
	}
	// while (counter >= 0)
	// {
	// 	counter--;
	// }
	if (i == 0)
		return NULL;
	return ((char *)(str + i));
}

/* int main()
{
	char *test = ft_strchr("hello", 'l');

	printf("%s\n", test);

	
} */


