/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:34:04 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/11 20:12:53 by mteriier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		len++;
	}
	return (len);
}

size_t	len_word(size_t i, char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[i])
	{
		while (s[i] != c)
		{
			len++;
			i++;
		}
		return (len);
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**big_tab;
	char	*tab;

	big_tab = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!big_tab)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		tab = ft_substr(s, i, len_word(i, s, c));
		if (!tab)
			return (0);
		big_tab[j] = tab;
		while (s[i] != c && s[i])
			i++;
		j++;
	}
	big_tab[j] = 0;
	return (big_tab);
}
