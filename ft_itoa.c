/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:01:11 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/23 16:46:43 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	*ft_intmin(void)
// {
// 	char	*intrep;

// 	intrep = (char *)malloc(12 * sizeof(char));
// 	if (!intrep)
// 		return (0);
// 	intrep = "-2147483648";
// 	intrep[11] = '\0';
// 	return (intrep);
// }

static int	ft_countint(int n)
{
	int		counter;

	counter = 0;
	if (n < 0)
		counter++;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

// static char	*ft_iszero(void)
// {
// 	char	*intrep;

// 	intrep = (char *)malloc(2 * sizeof(char));
// 	if (!intrep)
// 		return (0);
// 	intrep[0] = '0';
// 	intrep[1] = '\0';
// 	return (intrep);
// }

char	*ft_itoa(int n)
{
	char	*intrep;
	int		counter;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	counter = ft_countint(n);
	intrep = (char *)malloc((counter + 1) * sizeof(char));
	if (!intrep)
		return (0);
	if (n < 0)
	{
		n = -n;
		intrep[0] = '-';
	}
	intrep[counter] = '\0';
	counter--;
	while (n > 0)
	{
		intrep[counter] = (n % 10) + '0';
		counter--;
		n = n / 10;
	}
	return (intrep);
}

// #include <stdio.h>
// #include <unistd.h>

// int main()
// {
// 	char *str = ft_itoa(668);
// 	printf("%s\n", str);
// 	// write(1, str, 8);
// 	return (0);
// }
