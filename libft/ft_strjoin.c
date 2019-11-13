/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 11:21:10 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/11 20:43:59 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		count;
	int		string1;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	string1 = ft_strlen(s1);
	count = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(count + 1);
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s1, string1 + 1);
	ft_strlcat(new, s2, count + 1);
	return (new);
}
