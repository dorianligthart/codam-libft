/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:11:02 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/14 18:57:08 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Checks for an alphabetic character; in the standard "C" locale,
it is equivalent to (isupper(c) || islower(c)).

In some locales, there may be additional characters for which isalpha() is
true-letters which are neither upper case nor lower case.
*/
int	ft_isalpha(int a)
{
	return ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'));
}
