/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:45:07 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/05 19:14:00 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_memcpy_static(void *dst, const void *src, size_t n)
{
	unsigned char	*pdest;
	const char		*psource;

	pdest = dst;
	psource = src;
	if (!pdest && !psource)
		return (NULL);
	while (n > 0)
	{
		*pdest = *psource;
		n--;
		pdest++;
		psource++;
	}
	return (dst);
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*pdest;
	const char		*psource;

	pdest = (char *)dst;
	psource = (const char *)src;
	if (!dst && !src)
		return (NULL);
	if (pdest < psource)
		ft_memcpy_static(pdest, psource, len);
	else
	{
		pdest = dst + (len - 1);
		psource = src + (len - 1);
		while (len > 0)
		{
			*pdest = *psource;
			len--;
			pdest--;
			psource--;
		}
	}
	return (dst);
}
