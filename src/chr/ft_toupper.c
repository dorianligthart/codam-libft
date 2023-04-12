/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 17:42:38 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/09 21:24:27 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Description:
The toupper() function converts a lower-case letter to the corresponding
upper-case letter.
The argument must be representable as an unsigned char or the value of EOF.

Return value:
If the argument is a lower-case letter, the toupper() function returns
the corresponding upper-case letter if there is one,
otherwise, the argument is returned unchanged.
*/
int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}
