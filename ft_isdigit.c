/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 12:19:47 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/09 20:44:30 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Description:
The isdigit() function tests for a decimal digit character, char '0'..'9'.
ASCII Decimal: 		48..57 (0..9)
ASCII Octal:		060..067 && 070..071 (0..7 && 8..9)
ASCII Hexadecimal:	30..39 (0..9)

Return value:
The isdigit() function return int zero if the character tests false and 
return int non-zero if the character tests true.
*/
int	ft_isdigit(int a)
{
	return (a >= '0' && a <= '9');
}
