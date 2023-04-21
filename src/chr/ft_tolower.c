/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 17:47:50 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/14 18:54:51 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Returns conversion to lower case letter c, if possible. Otherwise c is returned.
*/
int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}
