/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strdup.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/09 18:00:42 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/09 18:52:28 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ret;
	size_t	size;

	size = sizeof(char) * (ft_strlen(s) + 1);
	ret = (char *)malloc(size);
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s, size);
	return (ret);
}
