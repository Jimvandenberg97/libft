/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 12:29:14 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/12/07 21:21:34 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (n == 0 || dst == src)
		return (dst);
	d = (char*)dst;
	s = (const char*)src;
	if (!d && !s)
		return (NULL);
	while (n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}
