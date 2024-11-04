/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isinset.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/28 11:51:25 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/28 12:00:18 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_isinset(int c, const char *set)
{
	const unsigned char	chr = (unsigned char)c;
	int					i;

	i = -1;
	while (set[++i])
		if (chr == set[i])
			return (i);
	return (-1);
}
