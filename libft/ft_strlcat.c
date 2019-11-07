/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:15:14 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/07 18:08:01 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t pos;
	size_t leng;
	size_t i;

	pos = ft_strlen(dst);
	leng = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (leng);
	if (pos >= dstsize)
		leng = leng + dstsize;
	else
		leng = leng + pos;
	while (src[i] != '\0' && pos + 1 < dstsize)
	{
		dst[pos] = src[i];
		pos++;
		i++;
	}
	dst[pos] = '\0';
	return (leng);
}
