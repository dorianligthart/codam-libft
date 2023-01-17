/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 15:01:45 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/17 18:53:06 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
	t_list	*lst2;
	t_list	*ptr;

	if (!lst)
		return (NULL);
	lst2 = ft_lstnew((f)(lst->content));
	ptr = lst2;
	while (lst->next)
	{
		ptr->next = ft_lstnew((f)(lst->next->content));
		lst = lst->next;
		ptr = ptr->next;
	}
	if (!(ptr->content))
	{
		ft_lstclear(&lst2, del);
		return (NULL);
	}
	return (lst2);
}
