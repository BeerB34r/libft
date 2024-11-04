/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   printf_c.h                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/21 18:44:00 by mde-beer       #+#    #+#                */
/*   Updated: 2024/11/04 16:32:41 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_C_H
# define PRINTF_C_H
# include <printf_datatypes.h>
# include <stdarg.h>

t_uchar	*get_char(t_printf_arg *argument, va_list *args);

// type-specific malloced string generators
t_uchar	*get_c(t_printf_arg *argument, int value);

#endif
