/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memset.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/07 18:48:07 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/09 19:00:29 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*d;

	d = s;
	while (n)
	{
		*d++ = (unsigned char)c;
		n--;
	}
	return (s);
}
