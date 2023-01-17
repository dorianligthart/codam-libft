/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 14:55:46 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/10 15:22:19 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

/*
Description:
Takes as a parameter a node and frees the memory of the node’s content
using the function ’del’ given as a parameter and free the node. 
The memory of ’next’ must not be freed.

Parameters:
lst:	The node to free.
del:	The address of the function used to delete the content.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
