/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 12:19:47 by dligthar      #+#    #+#                 */
/*   Updated: 2023/03/24 16:46:01 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Description:
ft_isdigit() function tests for a decimal digit character, char '0'..'9'.
Decimal: 		48..57 (0..9)
Octal:		060..067 && 070..071 (0..7 && 8..9)
Hexadecimal:	30..39 (0..9)

Return value:
The isdigit() function return int zero if the character tests false and 
return int non-zero if the character tests true.
*/
int	ft_isdigit(int a)
{
	return (a >= '0' && a <= '9');
}
