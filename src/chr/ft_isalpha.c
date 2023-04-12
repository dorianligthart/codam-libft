/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:11:02 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/09 20:32:17 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Description:
The isalpha() function tests for any character for which ft_isupper(int a) ||
ft_islower(int a) is true. The value of the argument must be representable as
an unsigned char(int 0..255) or the value of EOF.

Return value:
The isalpha() function returns zero if the character tests false and
returns non-zero if the character tests true.
*/
int	ft_isalpha(int a)
{
	return ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'));
}
