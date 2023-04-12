/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 15:51:32 by dligthar      #+#    #+#                 */
/*   Updated: 2023/03/24 18:21:39 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Description:
The isprint() function tests for any printing character, including space (' ').
The value of the argument must be representable as an unsigned char or 
the value of EOF.

Return value:
The isprint() function returns zero if the character tests false and 
returns non-zero if the character tests true.
*/
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
