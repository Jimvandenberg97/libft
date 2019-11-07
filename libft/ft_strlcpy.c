/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 19:53:11 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/07 15:41:23 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = 0;
	if (dst == NULL || src == NULL)
		return (len);
	while (src[len] != '\0')
		len++;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = '\0';
		return (len);
	}
	return (len);
}
