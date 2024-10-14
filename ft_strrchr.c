/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strrchr.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/08 16:29:59 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/13 13:12:00 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	chr;

	i = -1;
	len = ft_strlen(s);
	chr = (char)c;
	while (len - ++i >= 0)
		if (s[len - i] == chr)
			return ((char *)s + len - i);
	return (NULL);
}
