/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 16:01:18 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/10 16:14:20 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

size_t	ft_intlen(long int n)
{
	size_t	t;

	t = 1;
	if (n < 0)
		t++;
	while (n > 9 || n < -9)
	{
		n /= 10;
		t++;
	}
	return (t);
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
	size_t		t;
	long int	nb;
	char		*str;

	t = ft_intlen((long int)n);
	str = malloc((t + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[t] = '\0';
	nb = (long int)n;
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	while (!(-9 <= nb && nb <= 9))
	{
		str[--t] = (nb % 10) + '0';
		nb = nb / 10;
	}
	str[--t] = nb % 10 + '0';
	return (str);
}
