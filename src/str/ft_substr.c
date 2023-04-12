/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 10:16:15 by dligthar      #+#    #+#                 */
/*   Updated: 2023/03/24 18:19:39 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

#include <stddef.h>
#include <stdlib.h>

/*
Description:
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.

Parameters:
s:  The string from which to create the substring.
start:  The start index of the substring in the
string ’s’.
len:  The maximum length of the substring.

Return value:
The substring.
NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*result;

	if (!s || !s[0])
		return (ft_strdup(""));
	len_s = 0;
	while (s[len_s])
		len_s++;
	if (start >= len_s)
		return (ft_strdup(""));
	if (len + start > len_s)
		len = len_s - start;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len--)
		result[len] = s[start + len];
	return (result);
}
