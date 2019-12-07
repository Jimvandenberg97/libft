/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lotia.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <jivan-de@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/07 20:41:24 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/12/07 21:06:31 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lotoa(long n)
{
	char	*str;
	size_t	i;

	if (n == LONG_MIN)
		return (ft_strdup("-9223372036854775808"));
	i = ft_getnumlen(n, 10);
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}
