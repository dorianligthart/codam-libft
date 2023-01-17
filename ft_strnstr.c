/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 13:31:33 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/09 21:19:13 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
The strnstr() function locates the first occurrence of
the null-terminated string needle in the string haystack,
where not more than len characters are searched.
Characters that appear after a `\0' character are not searched.
Since the strnstr() function is a FreeBSD specific API, 
it should only be used when portability is not a concern.

Return value:
If needle is an empty string, haystack is returned.
If needle occurs nowhere in haystack, NULL is returned. Otherwise a pointer to
the first character of the first occurrence of needle is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;

	if (!*needle)
		return ((char *)haystack);
	len_needle = ft_strlen(needle);
	i = 0;
	while (i < len && i < ft_strlen(haystack))
	{
		if ((ft_memcmp(haystack + i, needle, len_needle) == 0)
			&& (i + len_needle <= len))
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
