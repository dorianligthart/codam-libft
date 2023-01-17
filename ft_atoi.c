/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 20:22:39 by dligthar      #+#    #+#                 */
/*   Updated: 2023/01/10 13:08:58 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == '\n' || c == '\f' || c == '\t'
		|| c == '\v' || c == '\r' || c == ' ')
		return (c);
	return (0);
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
	int	i;

	result = 0;
	while (ft_isspace(*str))
		str++;
	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (str[0] == '-')
		result *= -1;
	return (result);
}
