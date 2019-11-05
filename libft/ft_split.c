/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 19:00:02 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/05 20:00:14 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		isword(char const *src, chr c)
{
	int i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			break ;
		s++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	char	**new;

	if (s == NULL)
		return (NULL);
}
