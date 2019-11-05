/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 14:12:26 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/05 16:20:14 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
		return (ft_putstr_fd("-2147483648", fd));
	if (n == INT_MAX)
		return (ft_putstr_fd("2147483647", fd));
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + 48, fd);
}
