/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:14:52 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/25 17:29:46 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	res;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 10)
		ft_putnbr_fd(n / 10, fd);
	res = n % 10 + '0';
	write(fd, &res, 1);
}

// #include <unistd.h>

// void	ft_putnbr_fd(int n, int fd)
// {
// 	if (n == 0)
// 	{
// 		write(fd, "0", 1);
// 		return;
// 	}
// 	if (n < 0)
// 	{
// 		write(fd, "-", 1);
// 		if (n == -2147483648) // Handle special case
// 		{
// 			write(fd, "2147483648", 10); // Directly write the string for -2147483648
// 			return;
// 		}
// 		n = -n; // Now n is positive
// 	}

// 	if (n > 0)
// 	{
// 		if (n >= 10) // Recursive case
// 			ft_putnbr_fd(n / 10, fd);
// 		char digit = (n % 10) + '0'; // Convert last digit to character
// 		write(fd, &digit, 1);
// 	}
// }



// void	ft_putnbr_fd(int n, int fd)
// {
// 	int	res;

// 	if (n == 0)
// 	{
// 		write(fd, "0", 1);
// 		return ;
// 	}
// 	if (n == -2147483647)
// 	{
// 		write(fd, "-2147483647", 11);
// 		return ;
// 	}
// 	if (n < 0)
// 	{
// 		write(fd, "-", 1);
// 		n = -n;
// 	}
// 	if (n > 10)
// 	{
// 		ft_putnbr_fd(n / 10, fd);
// 	}
// 	res = n % 10 + '0';
// 	write(fd, &res, 1);
// }

// int main()
// {
// 	// ft_putnbr_fd(123123, 1);
// 	ft_putnbr_fd(-2147483648, 4);
// 	return (0);
// }