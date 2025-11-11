/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:34:04 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/11 16:02:29 by mteriier         ###   ########lyon.fr   */
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
		while (s1[i] == c)
			i++;
		while (s1[i] != c)
			i++;
		len++;
	}
}

char	 **ft_split(char const *s, char c)
{
	size_t	i;


	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
	}
}
