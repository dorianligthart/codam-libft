/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 16:12:44 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/08 13:32:30 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
Description:
The memcmp() function compares byte string s1 against byte string s2.
Both strings are assumed to be n bytes long.

Return value:
The memcmp() function returns zero if the two strings are identical, 
otherwise returns the difference between the first two differing bytes (treated
as unsigned char values, so that `\200' is greater than `\0', for example).
Zero-length strings are always identical.
This behavior is not required by C and portable code should only depend on
the sign of the returned value.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	if (n == 0 || (!s1 && !s2))
		return (0);
	i = 0;
	while (--n && *(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
		i++;
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
