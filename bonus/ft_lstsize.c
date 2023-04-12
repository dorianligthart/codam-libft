/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 14:00:53 by dligthar      #+#    #+#                 */
/*   Updated: 2023/03/24 16:38:12 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
Description:
Counts the number of nodes in a list.

Parameters:
lst:  The beginning of the list.

Return value:
The length of the list
*/
int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*ptr;

	if (!lst)
		return (0);
	ptr = lst;
	i = 1;
	while (ptr->next)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
