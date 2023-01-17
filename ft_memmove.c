/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 13:59:19 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/10 13:06:41 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
The memmove() function copies 'len' bytes from string 'src' to string 'dst'.
The 2 strings may overlap. The copy is always done in a non-destructive manner.

Return value:
The memmove() function returns the original value of dst.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if ((dst == src) || !len)
		return (dst);
	i = 0;
	if (dst >= src)
	{
		while (i < len)
		{
			*(char *)(dst - 1 + len - i) = *(char *)(src - 1 + len - i);
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
