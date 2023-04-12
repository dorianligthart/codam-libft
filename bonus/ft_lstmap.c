/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 15:01:45 by dligthar      #+#    #+#                 */
/*   Updated: 2023/03/16 21:09:08 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <stdlib.h>

/*
Description:
Iterates the list ’lst’ and applies the function ’f’ on the content of each node.
Creates a new list resulting of the successive applications of the function ’f’.
The ’del’ function is used to delete the content of a node if needed.

Parameters:
lst:	The address of a pointer to a node.
f:		The address of the function used to iterate on the list.
del:	The address of the function used to delete the content of a node if needed.

Return value:
The new list.
NULL if the allocation fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*ptr;

	new_list = NULL;
	while (lst && f && del)
	{
		ptr = f(lst->content);
		if (!ptr)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = ft_lstnew(ptr);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			del(ptr);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
