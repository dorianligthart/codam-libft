/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 15:31:39 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/09 20:36:29 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Description:
The isascii() function tests for an ASCII character,
which is any character between 0 and octal 0177 inclusive,
which is any character between 0 and decimal 127 inclusive.

Return value:
The isascii() function shall return non-zero if c is
a 7-bit US-ASCII character code between 0 and octal 0177 inclusive
otherwise, it shall return 0.
*/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
