/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr_fd.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/10 15:41:55 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/10 18:09:18 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int	sign;
	int	div;
	int	mod;

	div = nb / 10;
	mod = nb % 10;
	sign = (1 * (nb >= 0)) + (-1 * (nb < 0));
	if (sign < 0)
		ft_putchar_fd('-', fd);
	if (div)
		ft_putnbr_fd(div * sign, fd);
	ft_putchar_fd((mod * sign) + 0x30, fd);
}
