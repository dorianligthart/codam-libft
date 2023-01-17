/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 11:13:03 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/10 16:14:50 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	size_t	s1_len;
	size_t	s2_len;
	char	*a;
	size_t	i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	a = ft_calloc((s1_len + s2_len + 1), sizeof(char));
	if (!a)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		a[i] = s1[i];
		i++;
	}
	while (i >= s1_len && i < s1_len + s2_len)
	{
		a[i] = s2[i - s1_len];
		i++;
	}
	return (a);
}
