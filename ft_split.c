/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:09:41 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/23 16:37:26 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_readstr(char const *s, char c)
{
	int	strcount;
	int	i;

	i = 0;
	strcount = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
		strcount++;
	}
	return (strcount);
}

static void	free_array(char **doublearray)
{
	int	i;

	i = 0;
	while (doublearray[i])
	{
		free(doublearray[i]);
		i++;
	}
	free(doublearray);
}

static char	**ft_initarray(char const *s, char c, int size, char **doublearray)
{
	int		len;
	int		start;
	int		i;

	i = 0;
	start = 0;
	while (i < size)
	{
		while (s[start] == c && s[start] != '\0')
			start++;
		len = 0;
		while (s[start + len] != c && s[start + len] != '\0')
			len++;
		doublearray[i] = ft_substr(s, start, len);
		if (doublearray[i] == NULL)
			free_array(doublearray);
		start = start + len;
		i++;
	}
	return (doublearray);
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**doublearray;

	size = (ft_readstr(s, c) + 1);
	if (!s)
		return (NULL);
	doublearray = ft_calloc (size, sizeof(char *));
	if (!doublearray)
		return (0);
	ft_initarray(s, c, size - 1, doublearray);
	return (doublearray);
}

// int main()
// {
// 	char **result = ft_split("split  ||this|for|me|||||!|", '|');
// 	for (int i = 0; result[i]; i++)
// 	{
// 		printf("Substring %d: >%s<\n", i, result[i]);
// 		free(result[i]);  // Free each substring
// 	}
// 	return (0);
// }
