/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   libftprintf.h                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/19 17:30:22 by mde-beer       #+#    #+#                */
/*   Updated: 2024/11/04 16:31:31 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <printf_datatypes.h>
// Type-specific plumbing headers
# include <printf_di.h>
# include <printf_u.h>
# include <printf_o.h>
# include <printf_x.h>
# include <printf_ux.h>
# include <printf_p.h>
# include <printf_c.h>
# include <printf_s.h>
# include <printf_percent.h>

static t_uchar *(*const	g_specifiers[18])(t_printf_arg *, va_list *) = {
	get_signed_decimal,
	get_unsigned_decimal,
	get_unsigned_octal,
	get_unsigned_lo_hex,
	get_unsigned_hi_hex,
	NULL,	//	get_float_dec_lo,
	NULL,	//	get_float_dec_hi,
	NULL,	//	get_scientific_lo,
	NULL,	//	get_scientific_hi,
	NULL,	//	get_short_fe_lo,
	NULL,	//	get_short_fe_hi,
	NULL,	//	get_float_hex_lo,
	NULL,	//	get_float_hex_hi,
	get_char,
	get_string,
	get_ptraddr,
	NULL,	//	get_store_print,
	get_percent
};

// Porcelain functions
int			ft_printf(const char *format, ...)\
						__attribute__((format(printf, 1, 2)));
int			ft_dprintf(int fd, const char *format, ...)\
						__attribute__((format(printf, 2, 3)));
int			ft_sprintf(char *str, const char *format, ...)\
						__attribute__((format(printf, 2, 3)));
t_pf_ret	ft_printf_chassis(t_uchar *format, va_list *args);
// Content plumbing
t_uchar		*get_until_arg(t_uchar **format, t_printf_arg *argument);
t_uchar		*get_arg(t_printf_arg *argument, t_uchar **format, va_list *args);
// Argument plumbing
void		clear_arg(t_printf_arg *argument);
void		parse_arg(t_printf_arg *argument, t_uchar **format);
void		parse_flag(t_printf_arg *argument, t_uchar **format);
void		parse_width(t_printf_arg *argument, t_uchar **format);
void		parse_precision(t_printf_arg *argument, t_uchar **format);
void		parse_length(t_printf_arg *argument, t_uchar **format);
void		parse_specifier(t_printf_arg *argument, t_uchar **format);
#endif
