/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 17:48:54 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/10 13:07:42 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
The strchr() function locates the first occurrence of c (converted to a char)
in the string pointed to by s.  
The terminating null character is considered to be part of the string.
Therefore if c is `\0', the functions locate the terminating `\0'.

Return value:
The functions strchr() returns a pointer to the located character,
or NULL if the character does not appear in the string.
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (c == '\0' || (c <= 8192 && c >= 128))
		return ((char *)(s + i));
	return (NULL);
}
