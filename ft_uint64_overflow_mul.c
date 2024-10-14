/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_uint64_overflow_mul.c                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/14 14:21:47 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/14 14:24:03 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

int	ft_uint64_overflow_mul(uint64_t a, uint64_t b, uint64_t *product)
{
	uint64_t	a_lo;
	uint64_t	b_lo;
	uint64_t	a_hi;
	uint64_t	b_hi;
	uint64_t	result;

	a_lo = a & 0xFFFFFFFF;
	b_lo = b & 0xFFFFFFFF;
	a_hi = a >> 32;
	b_hi = b >> 32;
	if (a_hi && b_hi)
		return (1);
	if ((a_hi * b_lo + a_lo * b_hi) >> 32)
		return (2);
	result = ((a_hi * b_lo) + (a_lo * b_hi)) + ((a_lo * b_lo) >> 32);
	if (result >> 32)
		return (3);
	*product = a * b;
	return (0);
}
