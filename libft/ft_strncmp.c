/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 20:11:47 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/12/07 20:49:47 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((unsigned char)*s1 == (unsigned char)*s2 && *s1 != '\0' && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	if ((unsigned char)*s1 == (unsigned char)*s2)
		return (0);
	else if ((unsigned char)*s1 > (unsigned char)*s2)
		return (1);
	else
		return (-1);
}
