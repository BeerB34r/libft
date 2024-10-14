/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strtrim.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/10 14:28:39 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/13 16:40:40 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_isinset(int c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char		*ret;
	int			start;
	int			end;
	const int	len = ft_strlen(s1);

	ret = NULL;
	start = 0;
	end = len - 1;
	while (ft_isinset(s1[start], set) != -1)
		start++;
	while (ft_isinset(s1[end], set) != -1)
		end--;
	if (end - start >= 0)
		ret = ft_substr(s1, start, end - start + 1);
	else
		ret = ft_calloc(1, sizeof(char));
	return (ret);
}
