/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 15:51:32 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/14 19:02:34 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Checks for any printable character including space.
*/
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
