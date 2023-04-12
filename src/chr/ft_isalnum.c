/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:32:47 by dligthar      #+#    #+#                 */
/*   Updated: 2023/03/19 17:00:10 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/*
Description:
The isalnum() function tests for any character for which isalpha(int c) or 
isdigit(int c) is true. The value of the argument must be representable as
an unsigned char(int 0..255) or the value of EOF.


Return value:
The isalnum() function returns zero if the character tests false and 
returns non-zero if the character tests true.
*/
int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
