/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 16:02:28 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/08 15:09:25 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
Description:
strlcpy() copies up to dstsize - 1 characters from the string src to dst,
NUL-terminating the result if dstsize is not 0.
If the src and dst strings overlap, the behavior is undefined.

Return value:
Like snprintf(3), the strlcpy() and strlcat() functions return the total 
length of the string they tried to create.  
For strlcpy() that means the length of src.
If the return value is >= dstsize, the output string has been truncated.
It is the caller's responsibility to handle this.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (dstsize > 0 && src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

// {
// 	size_t	i;

// 	i = 0;
// 	if (dstsize > 0)
// 	{
// 		while (src[i] && i < dstsize - 1)
// 		{
// 			dst[i] = src[i];
// 			i++;
// 		}
// 		dst[i] = '\0';
// 	}
// 	while (src[i])
// 		i++;
// 	return (i);
// }