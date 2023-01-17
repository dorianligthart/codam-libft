/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 14:19:34 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/10 16:03:10 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

/*
Description:
The calloc() function contiguously allocates enough space for count objects that
are size bytes of memory each and returns a pointer to the allocated memory.
The allocated memory is filled with bytes of value 0.

Parameters:
Like malloc but with comma instead of the product.

Return value:
Pointer to allocated memory
*/
void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*a;

	i = 0;
	a = (char *)malloc(count * size);
	if (!a)
		return (NULL);
	ft_bzero(a, count * size);
	return (a);
}
