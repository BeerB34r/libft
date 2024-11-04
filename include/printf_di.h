/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   printf_di.h                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/21 18:44:00 by mde-beer       #+#    #+#                */
/*   Updated: 2024/11/04 16:32:55 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_DI_H
# define PRINTF_DI_H
# include <printf_datatypes.h>
# include <stdarg.h>

t_uchar	*get_signed_decimal(t_printf_arg *argument, va_list *args);

// shared utilities
t_uint	add_sign_i(t_uchar **out, t_printf_arg *argument, t_uint negative);
t_uint	pad_i(t_uchar **out, t_printf_arg *argument);

// type-specific malloced string generators
t_uchar	*get_int_i(t_printf_arg *argument, int value);
t_uchar	*get_hh_i(t_printf_arg *argument, t_schar value);
t_uchar	*get_h_i(t_printf_arg *argument, t_s_sint value);
t_uchar	*get_l_i(t_printf_arg *argument, t_l_sint value);
t_uchar	*get_ll_i(t_printf_arg *argument, t_ll_sint value);
t_uchar	*get_j_i(t_printf_arg *argument, intmax_t value);
t_uchar	*get_z_i(t_printf_arg *argument, size_t value);
t_uchar	*get_t_i(t_printf_arg *argument, ptrdiff_t value);

#endif
