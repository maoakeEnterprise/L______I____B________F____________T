/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:13:31 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/13 14:54:51 by mteriier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isinset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	strlentrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = 0;
	i = 0;
	if (ft_strlen(s1) > 0)
		j = ft_strlen(s1) - 1;
	while (s1[i] && isinset(s1[i], set))
		i++;
	while (j > 0 && isinset(s1[j], set))
		j--;
	len = j - i;
	return (len + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*tmp;

	i = 0;
	if (!s1 || !set)
		return (0);
	if (ft_strlen(s1) == 0)
	{
		tmp = ft_strdup(s1);
		return (tmp);
	}
	len = strlentrim(s1, set);
	while (s1[i] && isinset(s1[i], set))
		i++;
	tmp = ft_substr(s1, i, len);
	return (tmp);
}
