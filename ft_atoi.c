/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:47:18 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/15 12:41:32 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	counter;
	int	minus;
	int	num;

	counter = 0;
	while (str[counter] != '\0' && ((str[counter] >= '\t'
				&& str[counter] <= '\r') || str[counter] == ' '))
		counter++;
	if (str[counter] == '-')
	{
		minus = 1;
		counter++;
	}
	num = 0;
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		num = (str[counter] - '0') + num * 10;
		counter++;
	}
	if (minus == 1)
		num = -num;
	return (num);
}

// int main()
// {
// 	char str[] = "-2147483649";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	return (0);
// }