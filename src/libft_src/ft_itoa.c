/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_itoa.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/10 15:11:43 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/14 14:28:32 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;
	int		sign;
	int		width;
	int		size;

	sign = 1;
	width = 0;
	while (n / ft_pow(10, ++width))
		;
	size = width;
	if (n < 0)
	{
		sign = -sign;
		size++;
	}
	ret = (char *)ft_calloc(size + 1, sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	if (sign == -1)
		ret[i++] = '-';
	while (width > 0)
		ret[i++] = (((signed long)n / ft_pow(10, --width) % 10) * sign) + 0x30;
	return (ret);
}
