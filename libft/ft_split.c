/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 19:00:02 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/07 16:34:22 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			wleng(const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

static int			wcount(const char *s, char c)
{
	int i;
	int ct;

	i = 0;
	ct = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		ct++;
	}
	return (ct);
}

static const char	*incr(const char *s, char c)
{
	while (*s == c && *s != '\0')
		s++;
	return (s);
}

static char			**copy(char **new, const char *s, char c, int j)
{
	int i;

	while (*s != '\0')
	{
		s = incr(s, c);
		if (*s == '\0')
			continue ;
		new[j] = malloc(sizeof(char*) * (wleng(s, c) + 1));
		if (new[j] == NULL)
		{
			return (NULL);
			free(new);
		}
		i = 0;
		while (*s != c && *s != '\0')
		{
			new[j][i] = *s;
			s++;
			i++;
		}
		new[j][i] = '\0';
		j++;
	}
	new[j] = NULL;
	return (new);
}

char				**ft_split(const char *s, char c)
{
	int		j;
	char	**new;

	j = 0;
	if (s == NULL)
		return (NULL);
	new = malloc(sizeof(char *) * (wcount(s, c) + 1));
	if (new == NULL)
	{
		return (NULL);
		free(new);
	}
	new = copy(new, s, c, j);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
