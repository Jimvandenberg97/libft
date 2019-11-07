/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 10:11:16 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/07 15:27:03 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				to_trim(char c, const char *set)
{
	size_t i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static const char		*get_first_pos(const char *str, const char *set)
{
	size_t i;

	i = 0;
	while (to_trim(str[i], set) && str[i] != '\0')
		i++;
	return (&str[i]);
}

static const char		*get_last_pos(const char *str, const char *set)
{
	size_t i;

	i = ft_strlen(str);
	if (i == 0)
		return (str);
	i--;
	while (to_trim(str[i], set) && i > 0)
		i--;
	return (&str[i]);
}

char					*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	char	*begin;
	char	*end;
	size_t	i;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	begin = (char*)get_first_pos(s1, set);
	end = (char*)get_last_pos(s1, set);
	i = 0;
	len = end - begin + 1;
	if (end < begin)
		len = 1;
	trim = (char *)malloc(len + 1);
	if (trim == NULL)
		return (NULL);
	while (i < len)
	{
		trim[i] = begin[i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
