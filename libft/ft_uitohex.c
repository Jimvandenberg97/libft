/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_uitohex.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <jivan-de@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/07 20:59:23 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/12/07 21:09:51 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const static char	*g_hexset = "0123456789ABCDEF";

char	*ft_uitohex(unsigned int n)
{
	char	*str;
	size_t	i;

	i = ft_getnumlen(n, 16);
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[i] = g_hexset[(n % 16)];
		n /= 16;
		i--;
	}
	return (str);
}
