/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstlast.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/13 17:00:25 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/14 14:06:18 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
