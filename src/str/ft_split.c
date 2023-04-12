/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/09 16:31:20 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/08 16:38:28 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

#include <stdlib.h>

/*
frees char **s itself and its components.
index is value of s[index] that got returned NULL because malloc failed. 
(starts free 1 under index)
*/
static void	*ft_free_arr_return_null(char **s, int arrlen)
{
	while (arrlen--)
		free(s[arrlen]);
	free(s);
	return (NULL);
}

static char	**split_setwords(char **s2, char const *s, char sep_chr, int words)
{
	int		wordindex;
	int		sep_len;
	int		len;

	wordindex = 0;
	sep_len = 0;
	while (wordindex < words)
	{
		len = 0;
		while (s[sep_len] == sep_chr)
			sep_len++;
		while (s[sep_len + len] && s[sep_len + len] != sep_chr)
			len++;
		s2[wordindex] = ft_substr(s, sep_len, len);
		if (!s2[wordindex])
			return (ft_free_arr_return_null(s2, wordindex));
		while (s[sep_len] && s[sep_len] != sep_chr)
			sep_len++;
		wordindex++;
	}
	return (s2);
}

static unsigned int	split_countwords(char const *s, char sep)
{
	int	index;
	int	words;

	words = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] != sep && (s[index + 1] == sep || s[index + 1] == '\0'))
			words++;
		index++;
	}
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
