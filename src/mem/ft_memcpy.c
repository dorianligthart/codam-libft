/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 13:55:11 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/08 13:18:35 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
Description:
The memcpy() function copies n bytes from memory area src to memory area dst.
If dst and src overlap, behavior is undefined. 
Applications in which dst and src might overlap should use memmove(3) instead.

Return value:
The memcpy() function returns the original value of dst.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	while (n--)
		*(unsigned char *)(dst + n) = *(unsigned char *)(src + n);
	return (dst);
}
