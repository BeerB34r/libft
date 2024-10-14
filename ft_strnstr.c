/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strnstr.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/08 18:14:02 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/13 16:10:22 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	const size_t	llen = ft_strlen(little);

	i = 0;
	if (!little[0])
		return ((char *)big);
	if (!len)
		return (NULL);
	while (i < len && ft_strlen(&big[i]) >= llen && big[i])
	{
		if (len - i < llen)
			return (NULL);
		if (!ft_strncmp(&big[i], little, llen))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
