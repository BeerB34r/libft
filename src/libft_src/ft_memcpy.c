/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memcpy.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/07 18:48:07 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/10 17:11:18 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = dest;
	s = (unsigned char *)src;
	while (n)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
