/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:10:29 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/10 13:08:19 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
The memchr() function locates the first occurrence of
c (converted to an unsigned char) in string s.

Return value:
The memchr() function returns a pointer to the byte located,
or NULL if no such byte exists within n bytes.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)(s + i) == (char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
