/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 14:58:52 by dligthar      #+#    #+#                 */
/*   Updated: 2023/03/24 16:40:03 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
Description:
Deletes and frees the given node and every successor of that node,
using the function ’del’ and free(3).
Finally, the pointer to the list is set to NULL.

Parameters:
lst:	The address of a pointer to a node.
del:	The address of the function used to delete the content of the node.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	ptr = *lst;
	while (ptr)
	{
		tmp = ptr->next;
		ft_lstdelone(ptr, del);
		ptr = tmp;
	}
	*lst = NULL;
}
