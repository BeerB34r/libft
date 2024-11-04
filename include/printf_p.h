/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   printf_p.h                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/21 18:44:00 by mde-beer       #+#    #+#                */
/*   Updated: 2024/11/04 16:33:25 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_P_H
# define PRINTF_P_H
# include <printf_datatypes.h>
# include <stdarg.h>

t_uchar	*get_ptraddr(t_printf_arg *argument, va_list *args);

// shared utilities
t_uint	add_base_p(t_uchar **out);
t_uint	pad_p(t_uchar **out, t_printf_arg *argument);

// type-specific malloced string generators
t_uchar	*get_p(t_printf_arg *argument, void *value);
#endif
