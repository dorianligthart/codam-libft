/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 16:01:18 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/18 18:58:20 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_intlen(int n, int base)
{
	int	intlen;

	intlen = 1;
	while (n <= -base || n >= base)
	{
		n /= base;
		intlen++;
	}
	if (n < 0)
		intlen++;
	return (intlen);
}

/*
Description:
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.

Parameters:
n:  the integer to convert.

Return value:
The string representing the integer.
NULL if the allocation fails.
*/
char	*ft_itoa(int n)
{
	char		*str;
	long int	long_n;
	int			intlen;

	intlen = ft_intlen(n, 10);
	str = malloc((intlen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[intlen--] = '\0';
	if (n == 0)
		str[0] = '0';
	long_n = (long int)n;
	if (long_n < 0)
	{
		long_n *= -1;
		str[0] = '-';
	}
	while (long_n)
	{
		str[intlen--] = (long_n % 10) + '0';
		long_n = long_n / 10;
	}
	return (str);
}
