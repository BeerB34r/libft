/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isalpha.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/07 16:40:35 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/07 17:42:20 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c)
{
	if (0x41 <= c && c <= 0x5A)
		return (1);
	return (0);
}

int	ft_islower(int c)
{
	if (0x61 <= c && c <= 0x7A)
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}
