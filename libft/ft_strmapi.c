/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 16:09:37 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/11 20:48:23 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*one;
	size_t	count;

	if (s == NULL || !f)
		return (NULL);
	i = 0;
	count = ft_strlen(s);
	one = malloc(count + 1);
	if (one == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		one[i] = f(i, s[i]);
		i++;
	}
	one[i] = '\0';
	return (one);
}
