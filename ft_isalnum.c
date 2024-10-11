/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:58:09 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/09 15:07:26 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}

int	ft_isalpha(int letter)
{
	if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}

// int main()
// {
// 	printf("%d\n", ft_isalnum(1));
// 	return (0);
// }