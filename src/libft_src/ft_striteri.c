/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_striteri.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/10 15:31:07 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/10 16:26:34 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	long int	i;

	i = -1;
	while (s[++i])
		f(i, &s[i]);
}
