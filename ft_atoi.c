/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/08 18:29:23 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/14 14:20:56 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	ret;
	int		i;

	sign = 1;
	ret = 0;
	i = -1;
	while (ft_isspace(nptr[++i]))
		;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
		ret = (ret * 10) + ((nptr[i++] - 0x30) * sign);
	if (ret > INT_MAX)
		return (INT_MAX);
	if (ret < INT_MIN)
		return (INT_MIN);
	return (ret);
}
