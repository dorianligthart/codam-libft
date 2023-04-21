/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 00:51:45 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/18 18:49:01 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
Description:
The strncmp() function lexicographically compare 
the null-terminated strings s1 and s2.
It compares not more than n characters.
Because strncmp() is designed for comparing strings rather than binary data,
characters that appear after a `\0' character are not compared.

Return value:
The strncmp() function returns an integer greater than, equal to, or less than 0,
according as the string s1 is greater than, equal to, or less than the string s2
The comparison is done using unsigned characters,
so that `\200' is greater than `\0'.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if ((s1[i] != s2[i]) || (s1[i] == '\0') || (s2[i] == '\0'))
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	return (0);
}
