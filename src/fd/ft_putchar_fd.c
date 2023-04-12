/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 17:22:28 by dligthar      #+#    #+#                 */
/*   Updated: 2023/03/24 16:49:09 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Description:
Outputs the character ’c’ to the given file
descriptor.

Parameters:
c:  The character to output.
fd:  The file descriptor on which to write.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
