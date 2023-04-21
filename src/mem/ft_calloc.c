/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 14:19:34 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/21 16:39:26 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
	void	*result;
	int		cs;

	cs = count * size;
	result = (char *)malloc(cs);
	if (!result)
		return (NULL);
	while (cs--)
		*(unsigned char *)(result + cs) = 0;
	return (result);
}
