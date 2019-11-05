/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 18:38:04 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/05 16:25:32 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s1)
{
	char	*mem;
	size_t	len;

	len = ft_strlen(s1) + 1;
	mem = (char *)malloc(sizeof(char) * len);
	if (!mem)
		return (NULL);
	return (ft_memcpy(mem, s1, len));
}
