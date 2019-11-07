/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 16:23:43 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/07 18:10:22 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	char *ptr;
	char one;

	ptr = NULL;
	if (c == '\0')
		return (ft_strchr(s, '\0'));
	while (*s)
	{
		one = *s;
		if (one == c)
			ptr = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s + 1);
	return (ptr);
}
