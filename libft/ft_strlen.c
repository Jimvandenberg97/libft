/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:32:54 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/05 16:27:39 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
