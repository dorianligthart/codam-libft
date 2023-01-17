/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 17:47:50 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/09 21:23:43 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Description:
The tolower() function converts an upper-case letter to the corresponding
lower-case letter.
The argument must be representable as an unsigned char or the value of EOF.

Return value:
If the argument is an upper-case letter, the tolower() function returns
the corresponding lower-case letter if there is one,
otherwise, the argument is returned unchanged.
*/
int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}
