/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   printf_percent.h                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/21 18:44:00 by mde-beer       #+#    #+#                */
/*   Updated: 2024/11/04 16:33:38 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_PERCENT_H
# define PRINTF_PERCENT_H
# include <printf_datatypes.h>
# include <stdarg.h>

t_uchar	*get_percent(t_printf_arg *argument, va_list *args);
#endif
