/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 17:21:17 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/08 14:54:01 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Description:
Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument.  Each character is passed by
address to ’f’ to be modified if necessary.

Parameters:
s:  The string on which to iterate.
f:  The function to apply to each character.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	index;

	if (!s || !s[0] || !f)
		return ;
	index = 0;
	while (s[index])
	{
		f((unsigned int)index, &s[index]);
		index++;
	}
}
