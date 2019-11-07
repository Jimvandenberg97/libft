/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 16:47:02 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/07 11:50:46 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *one;
	unsigned char *two;

	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	while (n > 0)
	{
		if (*one != *two)
			return ((int)(*one - *two));
		one++;
		two++;
		n--;
	}
	return (0);
}
