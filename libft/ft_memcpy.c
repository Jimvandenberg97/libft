/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 12:29:14 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/07 15:49:31 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
