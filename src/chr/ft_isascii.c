/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 15:31:39 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/14 19:02:40 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Checks whether c is a 7-bit unsigned char value that
fits into the ASCII character set.
man source: https://linux.die.net/man/3/isalnum && 
			https://linux.die.net/man/3/tolower
*/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
