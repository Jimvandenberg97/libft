/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:45:07 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/12 11:03:43 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*pdest;
	const char		*psource;

	pdest = (char *)dst;
	psource = (const char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (pdest < psource)
		ft_memcpy(pdest, psource, len);
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
