/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:06:38 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/10 14:29:46 by mteriier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)(i + s));
	while (i > 0)
	{
		if ((char)c == s[i])
			return ((char *)(s + i));
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)s);
	return (0);
}
