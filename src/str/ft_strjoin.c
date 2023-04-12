/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 11:13:03 by dligthar      #+#    #+#                 */
/*   Updated: 2023/03/19 17:03:42 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

#include <stdlib.h>

/*
Description:
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.

Parameters:
s1:  The prefix string.
s2:  The suffix string.

Return value:
The new string.
NULL if the allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*result;

	if (s1 && !s2)
		return (ft_strdup(s1));
	else if (!s1 && s2)
		return (ft_strdup(s2));
	else if (!s1 && !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[s1_len + s2_len] = '\0';
	while (s2_len--)
		result[s1_len + s2_len] = s2[s2_len];
	while (s1_len--)
		result[s1_len] = s1[s1_len];
	return (result);
}
