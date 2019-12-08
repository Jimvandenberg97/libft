/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_bonus.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <jivan-de@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 12:29:44 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/12/08 02:11:15 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 32

#endif

#include "libft.h"

static char		*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if ((unsigned char)c == *s)
			return ((char*)s);
		s++;
	}
	if (*s == '\0' && (unsigned char)c == *s)
		return ((char*)s);
	return (NULL);
}

static char		*ft_strdup(const char *s1)
{
	size_t	len;
	void	*mem;

	if (!s1)
		return (ft_strdup(""));
	len = ft_strlen(s1);
	mem = (char*)malloc(len + 1);
	if (!mem)
		return (NULL);
	ft_memcpy(mem, s1, len + 1);
	return (mem);
}

static char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_1;
	size_t	len_2;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	str = malloc(len_1 + len_2 + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len_1 + 1);
	ft_strlcat(str, s2, len_1 + len_2 + 1);
	return (str);
}

static int	ft_read(const int fd, char *fd_store[fd], int x)
{
	char	*buf;
	char	*tmp;
	int		tmp_res;

	buf = (char*)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (-1);
	tmp_res = read(fd, buf, BUFFER_SIZE);
	if (tmp_res >= 0 && x != -1)
		buf[tmp_res] = '\0';
	if (fd_store[fd] == NULL && tmp_res > 0 && x != -1)
		fd_store[fd] = ft_strdup(buf);
	else if (tmp_res > 0 && x != -1)
	{
		tmp = fd_store[fd];
		fd_store[fd] = ft_strjoin(tmp, buf);
		free(tmp);
	}
	free(buf);
	if (((tmp_res == -1 || x == -1) && fd_store[fd]))
	{
		free(fd_store[fd]);
		fd_store[fd] = NULL;
	}
	return ((x == -1) ? -1 : tmp_res);
}

int			ft_get_next_line(int fd, char **line)
{
	static char	*fd_store[INT_MAX];
	char		*ptr_nl;
	char		*tmp;
	int			res;

	if (BUFFER_SIZE <= 0 || !line)
		return (-1);
	res = 1;
	while (!ft_strchr(fd_store[fd], '\n') && res > 0)
		res = ft_read(fd, fd_store, res);
	if (res < 0)
		return (-1);
	ptr_nl = ft_strchr(fd_store[fd], '\n');
	if (ptr_nl != NULL)
	{
		*line = ft_substr(fd_store[fd], 0, ptr_nl - fd_store[fd]);
		tmp = fd_store[fd];
		fd_store[fd] = ft_strdup(ptr_nl + 1);
		free(tmp);
		return ((*line == NULL || res < 0) ? ft_read(fd, fd_store, -1) : 1);
	}
	*line = ft_strdup(fd_store[fd]);
	free(fd_store[fd]);
	fd_store[fd] = NULL;
	return ((*line == NULL || res < 0) ? -1 : 0);
}
