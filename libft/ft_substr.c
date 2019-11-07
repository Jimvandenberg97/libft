/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 10:43:58 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/07 16:34:24 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0' && i < start)
		i++;
	while (s[i] != '\0' && j < len)
	{
		i++;
		j++;
	}
	new = malloc(j + 1);
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s + start, j + 1);
	new[j] = '\0';
	return (new);
}
