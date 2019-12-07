/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 12:24:55 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/12/07 20:40:48 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char	*str;
	size_t	leng;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	leng = ft_getnumlen(n, 10);
	str = (char *)malloc(leng + 1);
	if (str == NULL)
		return (NULL);
	str[leng] = '\0';
	leng--;
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[leng] = '0' + (n % 10);
		n /= 10;
		leng--;
	}
	return (str);
}
