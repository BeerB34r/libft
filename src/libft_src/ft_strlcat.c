/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/07 20:23:56 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/09 19:32:20 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dst);
	if (len >= size)
		return (size + ft_strlen(src));
	while (i + len < size - 1 && src[i])
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[i + len] = 0;
	return (ft_strlen(src) + len);
}
