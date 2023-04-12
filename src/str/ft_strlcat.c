/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 17:09:47 by dligthar      #+#    #+#                 */
/*   Updated: 2023/03/24 17:56:40 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

#include <stddef.h>

/*
Description:
strlcat() appends string src to the end of dst.
It will append at most dstsize - strlen(dst) - 1 characters.
It will then NUL-terminate,
unless dstsize is 0 or the original dst string was longer than dstsize.
If the src and dst strings overlap, the behavior is undefined.

Return value:
Like snprintf(3), the strlcpy() and strlcat() functions return the total
length of the string they tried to create. 
For strlcat() that means the initial length of dst plus the length of src.

If the return value is >= dstsize, the output string has been truncated.
It is the caller's responsibility to handle this.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (dst_len + i < dstsize - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
