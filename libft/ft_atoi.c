/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:43:50 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/05 18:58:23 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		num;
	int		prefix;

	num = 0;
	prefix = 1;
	while (*str != '\0' && (*str == '\t' || *str == '\n' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == ' '))
		str++;
	if (*str == '-')
	{
		prefix = -1;
		str++;
	}
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		num = num * 10 + *str - 48;
		str++;
	}
	return (num * prefix);
}
