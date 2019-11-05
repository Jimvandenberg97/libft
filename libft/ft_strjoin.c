/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 11:21:10 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/05 16:20:39 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		count;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	count = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(count + 1);
	if (new)
	{
		ft_strlcpy(new, s1, count + 1);
		ft_strlcat(new, s2, count + 1);
		return (new);
	}
	return (NULL);
}
