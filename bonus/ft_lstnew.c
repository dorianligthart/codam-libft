/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 14:00:56 by dligthar      #+#    #+#                 */
/*   Updated: 2023/03/16 19:51:20 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <stdlib.h>

/*
Description:
Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with 
the value of the parameter ’content’.
The variable ’next’ is initialized to NULL.

Parameters:
content:  The content to create the node with.

Return value:
The new node
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
