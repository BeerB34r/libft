/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isinset.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/28 11:51:25 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/28 11:52:53 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_isinset(int c, char *set)
{
	const unsigned char	chr = (unsigned char)c;

	while (*set)
		if (chr == *set++)
			return (1);
	return (0);
}
