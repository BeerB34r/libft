/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_split.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/10 14:42:16 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/13 13:18:55 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_strcontain(const char *str, char c)
{
	int	i;

	i = -1;
	while (str && str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}

static void	ft_free_str_array(char	**array)
{
	int	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
}

static int	ft_split_count(const char *s, char c)
{
	int	count;
	int	i;
	int	prev;

	count = 0;
	i = -1;
	prev = 0;
	while (s[++i])
	{
		if (s[i] == c)
			prev = 0;
		else
		{
			if (!prev)
				count++;
			prev = 1;
		}
	}
	return (count);
}

static char	*ft_split_str(const char *s, char c)
{
	char	*ret;
	int		dist;

	dist = ft_strcontain(s, c);
	if (dist == -1)
		ret = ft_substr(s, 0, ft_strlen(s));
	else
		ret = ft_substr(s, 0, dist);
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	int		size;
	int		i;

	if (!s)
		return (NULL);
	size = ft_split_count(s, c);
	ret = (char **)ft_calloc(size + 1, sizeof(char *));
	if (!ret)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (*s == c)
			s++;
		ret[i] = ft_split_str(s, c);
		if (!ret[i])
		{
			ft_free_str_array(ret);
			return (NULL);
		}
		s += ft_strlen(ret[i]) + 1;
	}
	return (ret);
}
