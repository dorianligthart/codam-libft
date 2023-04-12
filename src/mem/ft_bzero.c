/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 22:09:04 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/08 13:47:51 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
	while (n--)
		((unsigned char *)s)[n] = 0;
}
