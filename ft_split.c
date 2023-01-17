/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/09 16:31:20 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/10 16:03:53 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static void	*ft_free(char **s, int index)
{
	while (index--)
		free(s[index]);
	free(s);
	return (NULL);
}

static char	**ft_set_words(char **s2, char const *s, char sep, int words)
{
	int		index;
	int		start;
	int		wordlen;

	index = 0;
	start = 0;
	while (index < words)
	{
		wordlen = 0;
		while (s[start] == sep)
			start++;
		while (s[start + wordlen] != sep && s[start + wordlen])
			wordlen++;
		s2[index] = ft_substr(s, start, wordlen);
		if (!s2[index])
			return (ft_free(s2, ++index));
		while (s[start] != sep && s[start])
			start++;
		index++;
	}
	return (s2);
}

static unsigned int	ft_countwords(char const *s, char sep)
{
	int	i;
	int	words;

	words = 0;
	i = -1;
	while (s[++i])
		if (s[i] != sep && (s[i + 1] == sep || s[i + 1] == '\0'))
			words++;
	return (words);
}

/*
Description:
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter.  The array must end
with a NULL pointer.

Parameters:
s:  The string to be split.
c:  The delimiter character.

Return value:
The array of new strings resulting from the split.
NULL if the allocation fails.
*/
char	**ft_split(char const *s, char c)
{
	char	**s2;
	int		words;

	if (!s)
		return (NULL);
	words = ft_countwords(s, c);
	s2 = (char **)malloc((words + 1) * sizeof(char *));
	if (!s2)
		return (NULL);
	s2[words] = NULL;
	s2 = ft_set_words(s2, s, c, words);
	if (!s2)
		return (NULL);
	return (s2);
}
