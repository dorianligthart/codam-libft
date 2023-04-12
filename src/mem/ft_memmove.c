/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 13:59:19 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/08 13:41:01 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
Description:
The memmove() function copies 'len' bytes from string 'src' to string 'dst'.
The 2 strings may overlap. The copy is always done in a non-destructive manner.

Return value:
The memmove() function returns the original value of dst.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (len--)
	{
		if (dst < src)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
		else
			*(char *)(dst + len) = *(char *)(src + len);
	}
	return (dst);
}
