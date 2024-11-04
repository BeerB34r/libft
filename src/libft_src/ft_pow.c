/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_pow.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/14 14:27:27 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/14 14:28:36 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

long	ft_pow(int base, unsigned int exponent)
{
	long	ret;

	ret = 1;
	while (exponent--)
		ret *= base;
	return (ret);
}
