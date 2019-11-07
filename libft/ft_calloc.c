/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 17:33:57 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/07 15:49:53 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	if (*ptr)
		ft_bzero(ptr, count * size);
	return (ptr);
}
