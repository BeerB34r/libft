/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strchr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/08 16:29:59 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/13 13:09:34 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;
	char	chr;

	i = 0;
	len = ft_strlen(s);
	chr = (char)c;
	while (s[i])
	{
		if (s[i] == chr)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == chr)
		return ((char *)s + i);
	return (NULL);
}
