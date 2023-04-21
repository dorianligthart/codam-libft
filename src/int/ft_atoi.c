/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 20:22:39 by dligthar      #+#    #+#                 */
/*   Updated: 2023/04/21 16:38:23 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == '\n' || c == '\f' || c == '\t'
		|| c == '\v' || c == '\r' || c == ' ');
}

/*
Description:
The atoi() function converts the initial portion of the string,
pointed to by str, to int representation.

Return value:
The converted value or 0 on error.
*/
int	ft_atoi(const char *str)
{
	int	result;
	int	index;

	result = 0;
	if (!str)
		return (0);
	while (ft_isspace(*str))
		str++;
	index = 0;
	if (str[0] == '-' || str[0] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
		result = (result * 10) + (str[index++] - '0');
	if (str[0] == '-')
		result *= -1;
	return (result);
}
