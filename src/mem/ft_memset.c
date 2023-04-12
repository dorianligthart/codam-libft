/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:17:42 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/08 13:14:56 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
Description:
The memset() function writes len bytes of value c
(converted to an unsigned char) to the string b.

Return value:
The memset() function returns its first argument.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		((unsigned char *)b)[len] = (unsigned char)c;
	return (b);
}
