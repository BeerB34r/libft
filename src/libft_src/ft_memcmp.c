/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memcmp.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/08 17:56:18 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/08 18:18:38 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;
	int					ret;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n)
	{
		ret = str1[i] - str2[i];
		if (ret)
			return (ret);
		i++;
	}
	return (0);
}
