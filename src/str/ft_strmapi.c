/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 17:16:30 by dligthar      #+#    #+#                 */
/*   Updated: 2023/03/24 18:05:44 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

#include <stddef.h>
#include <stdlib.h>

/*
Description:
Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.

Parameters:
s:  The string on which to iterate.
f:  The function to apply to each character.

Return value:
The string created from the successive applications
of ’f’.
Returns NULL if the allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	len;

	if (!s || !s[0])
		return (ft_strdup(""));
	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len--)
		result[len] = (*f)(len, s[len]);
	return (result);
}
