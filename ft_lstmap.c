/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstmap.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/13 17:20:43 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/14 15:17:07 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*ret_head;

	if (!lst)
		return (NULL);
	ret_head = ft_lstnew(lst->content);
	if (!ret_head)
		return (NULL);
	ret = ret_head;
	ret->content = f(ret->content);
	lst = lst->next;
	while (lst)
	{
		ret->next = ft_lstnew(lst->content);
		if (!ret->next)
		{
			ft_lstclear(&ret_head, del);
			return (NULL);
		}
		ret = ret->next;
		ret->content = f(ret->content);
		lst = lst->next;
	}
	return (ret_head);
}
