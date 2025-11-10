/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:18:36 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/10 16:16:33 by mteriier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
//#include <bsd/string.h>
#include <string.h>

int	main(void)
{
	/*================ TEST strlcpy =================*/
	/*char	dst[15]= "rrrrrr";
	char	dst1[15]= "rrrrrr";
	dst[14] = 'a';
	dst1[14] = 'a';
	char	*src = "lorem ipsum dolor sit amet";
	if (argc > 1)
	{
		printf("BSD : %zu, %s\n", strlcat(dst, src, atoi(argv[1])), dst);
		printf("MINE : %zu, %s\n", ft_strlcat(dst1, src, atoi(argv[1])), dst1);
	}*/
	/*================ TEST strlcpy =================*/

	/*================ TEST strchr =================*/
	/*
	printf("%s\n", strchr("aaaaavaaa", 'v'));
	printf("%s\n", ft_strchr("aaaaavaaa", 'v'));
	printf("%s\n", strchr("aaaaavaaa", '\0'));
	printf("%s\n", ft_strchr("aaaaavaaa", '\0'));
	printf("%s\n", strchr("aaaaavaaa", 'b'));
	printf("%s\n", ft_strchr("aaaaavaaa", 'b'));
	*/
	/*================ TEST strchr =================*/

	/*================ TEST strrchr =================*/
	/*
	printf("%s\n", strchr("aaaaavavaa", 'v'));
	printf("%s\n", ft_strchr("aaaaavavaa", 'v'));
	printf("%s\n", strchr("aaaaavaaa", '\0'));
	printf("%s\n", ft_strchr("aaaaavaaa", '\0'));
	printf("%s\n", strchr("aaaaavaaa", 'b'));
	printf("%s\n", ft_strchr("aaaaavaaa", 'b'));
	*/
	/*================ TEST strchr =================*/

	/*================ TEST strncmp =================*/
	printf("BSD  : %d\n", strncmp("test\200", "test\0", 6));
	printf("MINE : %d\n", ft_strncmp("test\200", "test\0", 6));
	
	/*================ TEST strncmp =================*/
}
