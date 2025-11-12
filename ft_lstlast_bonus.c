/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:14:26 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/12 12:24:29 by mteriier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		len;
	int		i;
	t_list	*tmp;

	if (!lst)
		return (0);
	len = ft_lstsize(lst);
	i = 0;
	tmp = lst;
	while (i < len - 1)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
