/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 17:58:33 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/14 19:15:05 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Description:
Outputs the integer ’n’ to the given file
descriptor.

Parameters:
n:  The integer to output.
fd:  The file descriptor on which to write.
*/
void	ft_putnbr_fd(int n, int fd)
{
	long	divider;
	char	c;

	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	divider = 1;
	while (divider * 10 <= n)
		divider = divider * 10;
	while (divider)
	{
		c = n / divider + '0';
		write(fd, &c, 1);
		n = n % divider;
		divider = divider / 10;
	}
}
