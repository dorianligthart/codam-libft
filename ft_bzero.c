/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 22:09:04 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/10 13:05:48 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
The bzero() function erases the data in the n bytes of the memory
starting at the location pointed to by s, by writing zeros (bytes
containing '\0') to that area.

Parameters:
*s:	The location to start erasing from.
n:	The number of bytes to write '\0' to from location s.
*/
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (n--)
		((unsigned char *)s)[i++] = 0;
}
