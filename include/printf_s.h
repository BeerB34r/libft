/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   printf_s.h                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/21 18:44:00 by mde-beer       #+#    #+#                */
/*   Updated: 2024/11/04 16:33:50 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_S_H
# define PRINTF_S_H
# include <printf_datatypes.h>
# include <stdarg.h>

t_uchar	*get_string(t_printf_arg *argument, va_list *args);

// shared utilities
t_uint	pad_s(t_uchar **out, t_printf_arg *argument);

// type-specific malloced string generators
t_uchar	*get_s(t_printf_arg *argument, char *value);

#endif
