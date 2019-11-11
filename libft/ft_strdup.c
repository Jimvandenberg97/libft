/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 18:38:04 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/11 14:26:53 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s1)
{
	char	*mem;
	size_t	len;

	len = ft_strlen(s1);
	mem = malloc(sizeof(char) * len + 1);
	if (!mem)
		return (NULL);
	ft_strlcpy(mem, s1, len + 1);
	return (mem);
}
