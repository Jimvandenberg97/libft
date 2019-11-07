/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:18:11 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/07 18:02:38 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psource;

	pdest = (unsigned char *)dst;
	psource = (unsigned char *)src;
	while (n > 0)
	{
		*pdest = *psource;
		if (*psource == (unsigned char)c)
			return ((unsigned char *)pdest + 1);
		pdest++;
		psource++;
		n--;
	}
	return (NULL);
}
