/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 17:33:57 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/05 19:10:21 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_bzero_static(void *s, size_t n)
{
	unsigned char *p;

	p = s;
	while (n > 0)
	{
		*p = 0;
		n--;
		p++;
	}
}

void			*ft_calloc(size_t count, size_t size)
{
	size_t	one;
	size_t	two;
	char	*ptr;

	one = count;
	two = size;
	if (one == 0 || two == 0)
	{
		one = 1;
		two = 1;
	}
	ptr = malloc(one * two);
	if (!ptr)
		return (NULL);
	if (*ptr)
		ft_bzero_static(ptr, one * two);
	return (ptr);
}
