/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isascii.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/07 17:11:27 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/07 18:32:03 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
