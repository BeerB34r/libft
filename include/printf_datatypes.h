/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   printf_datatypes.h                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/24 10:38:58 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/31 16:25:53 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_DATATYPES_H
# define PRINTF_DATATYPES_H

# define FLAGS "-# +0"
# define LENGTH "hljztL"
# define SPECIFIER "diuoxXfFeEgGaAcspn%"

# include <stddef.h>
# include <stdint.h>

typedef enum e_printf_flags
{
	noflag = 0,
	leftjustify = 1 << 0,	// -
	baseprefix = 1 << 1,	// #
	spaceprefix = 1 << 2,	// \s
	signprefix = 1 << 3,	// +
	zeropad = 1 << 4		// 0
}	t_printf_flags;

typedef enum e_bool
{
	falsey,
	truey,
	maybe
}	t_bool;

typedef enum e_printf_len
{
	none,	// standard interpretation
	hh,		// minimum interpretation (char)
	h,		// short
	l,		// long
	ll,		// long long
	j,		// maximum interpretation (intmax_t)
	z,		// size_t
	t,		// ptrdiff_t
	u_l,	// long double
}	t_printf_len;

typedef enum e_printf_spec
{
	no_specifier,		// error
	signed_decimal,		// di
	unsigned_decimal,	// u
	unsigned_octal,		// o
	unsigned_lohex,		// x
	unsigned_hihex,		// X
	float_dec_lo,		// f
	float_dec_hi,		// F
	scientific_lo,		// e
	scientific_hi,		// E
	short_fe_lo,		// g
	short_fe_hi,		// G
	float_hex_lo,		// a
	float_hex_hi,		// A
	character,			// c
	string,				// s
	pointer_adr,		// p
	store_print,		// n
	percent,			// %
}	t_printf_spec;

typedef struct s_printf_argument
{
	t_printf_flags	flags;
	t_bool			parameter_width;
	unsigned int	width;
	t_bool			parameter_precision;
	unsigned int	precision;
	t_printf_len	length;
	t_printf_spec	specifier;
}	t_printf_arg;

typedef signed int				t_sint;
typedef signed char				t_schar;
typedef signed short int		t_s_sint;
typedef signed long int			t_l_sint;
typedef signed long long int	t_ll_sint;
typedef unsigned int			t_uint;
typedef unsigned char			t_uchar;
typedef unsigned short int		t_s_uint;
typedef unsigned long int		t_l_uint;
typedef unsigned long long int	t_ll_uint;

typedef struct s_printf_return
{
	t_uchar	*out;
	size_t	len;
}	t_pf_ret;

#endif
