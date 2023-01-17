/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 17:58:33 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/09 20:00:54 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

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
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', fd);
		nb = nb * (-1);
	}
	if (nb < 10)
		ft_putchar(nb + '0', fd);
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar(nb % 10 + '0', fd);
	}
}
