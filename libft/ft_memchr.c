/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 15:28:43 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/09 12:44:13 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*psource;
	size_t			i;

	psource = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		if (psource[i] == (unsigned char)c)
			return (psource + i);
		i++;
		n--;
	}
	return (NULL);
}
