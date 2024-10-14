/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstiter.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/13 17:19:00 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/13 17:20:32 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
