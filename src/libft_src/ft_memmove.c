/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memmove.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/07 19:37:27 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/09 19:19:32 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (src == dest)
		return (dest);
	if (src > dest)
		while (n--)
			*d++ = *s++;
	else
		while (n--)
			*(d + n) = *(s + n);
	return (dest);
}
