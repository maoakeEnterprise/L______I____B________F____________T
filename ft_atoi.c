/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:21:40 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/12 07:58:50 by mteriier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	calcul_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

long	ft_atoll(const char *nptr)
{
	size_t	i;
	int		sign;
	long	tmp;

	i = 0;
	sign = 1;
	tmp = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	sign = calcul_sign(nptr[i]);
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (tmp * 10 + nptr[i] - '0' < tmp && sign == 1)
			return (-1);
		if (tmp * 10 + nptr[i] - '0' < tmp && sign == -1)
			return (0);
		tmp = tmp * 10 + nptr[i] - '0';
		i++;
	}
	return (tmp * sign);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		tmp;

	i = 0;
	sign = 1;
	tmp = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	sign = calcul_sign(nptr[i]);
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		tmp = tmp * 10 + nptr[i] - '0';
		i++;
	}
	if (ft_atoll(nptr) == -1)
		return (-1);
	if (ft_atoll(nptr) == 0)
		return (0);
	return (tmp * sign);
}
