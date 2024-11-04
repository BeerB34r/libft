/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_substr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/10 13:33:04 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/13 13:12:41 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	size;

	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	size = ft_strlen(s) - start;
	if (size > len)
		size = len;
	ret = (char *)malloc(sizeof(char) * (size + 1));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, &s[start], size + 1);
	return (ret);
}
