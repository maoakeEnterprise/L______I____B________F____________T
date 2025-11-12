/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 08:44:31 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/12 09:55:52 by mteriier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_nb(int n)
{
	size_t	i;
	size_t	add;

	i = 0;
	add = 1;
	if (n < 0)
		add++;
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	return (i + add);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	len = len_nb(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = 0;
	len--;
	if (n < 0)
		str[0] = '-';
	while (n / 10)
	{
		if (n < 0)
			str[len] = '0' - n % 10;
		else
			str[len] = '0' + n % 10;
		len--;
		n = n / 10;
	}
	if (n < 0)
		n = n * -1;
	str[len] = n + '0';
	return (str);
}
