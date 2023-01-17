/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 09:50:03 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/17 16:00:02 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

/*
Description:
The strdup() function allocates sufficient memory for a copy of the string s1,
does the copy, and returns a pointer to it. The pointer may subsequently be used
as an argument to the function free(3).

Return value:
A clone of s1, or if insufficient memory is available, NULL is returned.
*/
char	*ft_strdup(const char *s1)
{
	size_t	size_s1;
	char	*s2;

	size_s1 = ft_strlen(s1);
	s2 = (char *)malloc((size_s1 + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	s2[size_s1] = '\0';
	while (size_s1--)
		s2[size_s1] = s1[size_s1];
	return (s2);
}
