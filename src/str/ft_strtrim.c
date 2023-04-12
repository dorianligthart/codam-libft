/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:41:16 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/08 15:23:39 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

#include <stddef.h>

/*
Description:
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.

Parameters:
s1:  The string to be trimmed.
set:  The reference set of characters to trim.

Return value:
The trimmed string.
NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len_s1;

	if (!*set || !*s1)
		return (ft_strdup(s1));
	start = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	len_s1 = ft_strlen(s1);
	end = 0;
	while (start < len_s1 && ft_strchr(set, s1[len_s1 - 1 - end]))
		end++;
	return (ft_substr(s1, start, len_s1 - (end + start)));
}
