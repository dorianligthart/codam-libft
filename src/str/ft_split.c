/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/09 16:31:20 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/18 18:56:03 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

#include <stdlib.h>

static char	**split_setwords(char **s2, char const *s, char c, int words)
{
	int		i;
	int		w;
	int		wordlen;

	i = 0;
	w = 0;
	while (w < words)
	{
		wordlen = 0;
		while (s[i] == c)
			i++;
		while (s[i + wordlen] && s[i + wordlen] != c)
			wordlen++;
		s2[w] = ft_substr(s, i, wordlen);
		if (!s2[w])
		{
			while (w >= 0)
				free(s2[w--]);
			free(s2);
			return (NULL);
		}
		i += wordlen;
		w++;
	}
	return (s2);
}

static unsigned int	split_countwords(char const *s, char sep)
{
	int	index;
	int	words;

	words = 0;
	index = -1;
	while (s[++index])
		if (s[index] != sep && (s[index + 1] == sep || s[index + 1] == '\0'))
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
	words = split_countwords(s, c);
	s2 = (char **)malloc((words + 1) * sizeof(char *));
	if (!s2)
		return (NULL);
	s2[words] = NULL;
	s2 = split_setwords(s2, s, c, words);
	return (s2);
}
