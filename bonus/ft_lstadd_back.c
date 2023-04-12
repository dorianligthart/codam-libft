/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 14:54:25 by dligthar      #+#    #+#                 */
/*   Updated: 2023/03/16 19:50:53 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
Description:
Adds the node ’new’ at the end of the list.
lst->lastnode->next = new.

Parameters:
lst:	The address of a pointer to the first link of a list.
new:	The address of a pointer to the node to be added to the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}
