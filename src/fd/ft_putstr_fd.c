/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 17:56:45 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/08 16:45:01 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Description:
Outputs the string ’s’ to the given file
descriptor.

Parameters:
s:  The string to output.
fd:  The file descriptor on which to write.
*/
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s && s[i])
		write(fd, s + i++, 1);
}
