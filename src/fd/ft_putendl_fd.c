/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 17:57:50 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/08 15:34:43 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Description:
Outputs the string ’s’ to the given file descriptor
followed by a newline.

Parameters:
s:  The string to output.
fd:  The file descriptor on which to write.
*/
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s && s[i])
		write(fd, s + i++, 1);
	write(fd, "\n", 1);
}
