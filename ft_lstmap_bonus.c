/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:28:49 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/12 19:34:21 by mteriier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (0);
	first = ft_lstnew((*f)(lst->content));
	if (!first)
		return (0);
	tmp = first;
	while (lst && lst->next)
	{
		tmp->next = ft_lstnew((*f)(lst->next->content));
		if (!(tmp->next))
			ft_lstclear(&(*first), (*del));
		tmp = tmp->next;
		lst = lst->next;
	}
	return (first);
}
