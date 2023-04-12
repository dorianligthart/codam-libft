/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 09:50:03 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/12 12:23:30 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
	char	*result;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (s1 && len--)
		result[len] = s1[len];
	return (result);
}
