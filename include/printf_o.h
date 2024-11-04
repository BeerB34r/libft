/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   printf_o.h                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/21 18:44:00 by mde-beer       #+#    #+#                */
/*   Updated: 2024/11/04 16:33:10 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_O_H
# define PRINTF_O_H
# include <printf_datatypes.h>
# include <stdarg.h>

t_uchar	*get_unsigned_octal(t_printf_arg *argument, va_list *args);

// shared utilities
t_uint	add_base_o(t_uchar **out);
t_uint	pad_o(t_uchar **out, t_printf_arg *argument);

// type-specific malloced string generators
t_uchar	*get_int_o(t_printf_arg *argument, t_uint value);
t_uchar	*get_hh_o(t_printf_arg *argument, t_uchar value);
t_uchar	*get_h_o(t_printf_arg *argument, t_s_uint value);
t_uchar	*get_l_o(t_printf_arg *argument, t_l_uint value);
t_uchar	*get_ll_o(t_printf_arg *argument, t_ll_uint value);
t_uchar	*get_j_o(t_printf_arg *argument, uintmax_t value);
t_uchar	*get_z_o(t_printf_arg *argument, size_t value);
t_uchar	*get_t_o(t_printf_arg *argument, ptrdiff_t value);

#endif
