/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:19:15 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/25 12:48:00 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*count;
	t_list	*nextnode;
	
	if (lst == NULL)
		return ;
	if (*lst == NULL)
		return ;
	count = *lst;
	while (count != NULL) // to itrerate through the whole list // count->next != NULL wouldmiss the last node
	{
		nextnode = count->next;
		del((void *)count->content);
		free(count);
		count = nextnode; //not count->next beacuse content, including next pointer had already been freed 
	}
	*lst = NULL;
}
