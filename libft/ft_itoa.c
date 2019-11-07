/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 12:24:55 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/07 15:02:11 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_leng(int l)
{
	int len;

	len = 0;
	if (l < 0)
	{
		l = l * -1;
		len++;
	}
	if (l == 0)
		len = 1;
	while (l > 0)
	{
		l = l / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		leng;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	leng = get_leng(n);
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
		n = n * -1;
	}
	while (n > 0)
	{
		str[leng] = '0' + (n % 10);
		n = n / 10;
		leng--;
	}
	return (str);
}
