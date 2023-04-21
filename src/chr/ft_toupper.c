/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 17:42:38 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/14 18:55:03 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Returns conversion to upper case letter c, if possible. Otherwise c is returned.
*/
int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}
