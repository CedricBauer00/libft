/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbauer < cbauer@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:00:44 by cbauer            #+#    #+#             */
/*   Updated: 2024/10/26 14:17:47 by cbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*newListStart;
	void	*newcontent;
	

	
	// while (newnode != NULL)
	// {
	newListStart = NULL;
		while (lst != NULL)
		{
			newcontent = f(lst->content);
			if (!newcontent)
			{
					ft_lstclear(&newListStart, del);  //free list
					return (NULL);
			}
			// newnode = f((void *)lst->content);
			newnode = ft_lstnew(newcontent);
			if (!newnode)
			{
				del(newcontent);
				ft_lstclear(&newListStart, del);
				return (NULL);
			}
			ft_lstadd_back(&newListStart, newnode);
			lst = lst->next;
		}
	// 	newnode = newnode->next;
	// }
	return (newListStart);
}
