/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:15:04 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/13 11:28:24 by mteriier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	len_little = ft_strlen(little);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && little[j]
			&& big[i + j])
			j++;
		if (len_little == j)
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
