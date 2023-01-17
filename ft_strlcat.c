/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 17:09:47 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/09 21:05:17 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	if (!dst && !dstsize)
		return (len_src);
	if (dstsize < len_dst)
		return (dstsize + len_src);
	while (len_dst + i + 1 < dstsize && src[i])
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
