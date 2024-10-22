/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:09:41 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/22 17:57:36 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// void	ft_freemem(char )



static int	ft_readstr(char const *s, char c)
{
	int	strcount;
	int	i;

	i = 0;
	strcount = 0;

	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
		strcount++;
	}
	return (strcount);
}

char	**ft_split(char const *s, char c)
{
	// int		R;
	// int		C;
	// int		counter;
	// int		delcount;
	char	**doublearray;

	// if (!s)
	if (s == NULL)
	{
		printf("0\n");
		return (NULL);
	}
	doublearray = malloc ((ft_readstr(s, c) + 1 ) * sizeof(char *));
	printf("%d\n", ft_readstr(s, c));
	// if (!doublearray)
	// 	return (0);
	// R = 0
	// counter = 0;
	// while (R < ft_readstr(s, c))
	// {
	// 	while (s[counter] == c && s[counter] != '\0')
	// 		counter++;
	// 	doublearray[R] = substr(s, counter, )
	// 	R++;
	// }
	return (doublearray);
	}	

int main()
{
	ft_split(NULL, ',');
	return (0);
}