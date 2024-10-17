/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:01:51 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/17 19:10:07 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	counter;

	counter = 0;
	while (s[counter])
	{
		write(fd, &s[counter], 1);
		counter++;
	}
	write(fd, "\n", 1);
}

// int main()
// {
// 	ft_putstr_fd("asdasdasd", 0);
// 	return (0);
// }