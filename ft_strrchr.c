/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 17:48:54 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/09 21:21:25 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
The strchr() function locates the last occurrence of c (converted to a char)
in the string pointed to by s.  
The terminating null character is considered to be part of the string.
Therefore if c is `\0', the functions locate the terminating `\0'.

Return value:
The function strrchr() returns a pointer to the located character,
or NULL if the character does not appear in the string.
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + i));
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
