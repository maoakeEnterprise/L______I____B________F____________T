/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:18:36 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/13 10:15:13 by mteriier         ###   ########lyon.fr   */
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
	//printf("BSD  : %d\n", strncmp("test\200", "test\0", 6));
	//printf("MINE : %d\n", ft_strncmp("test\200", "test\0", 6));
	
	/*================ TEST strncmp =================*/

	/*================ TEST strnstr =================*/

	//printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
	//printf("%s\n", ft_strnstr("abc", "abc", 7));

	/*================ TEST strnstr =================*/

	/*================ TEST atoi =================*/
	/*printf("%d\n",atoi("    \n -452n54"));
	printf("%d\n",atoi("    ---45254"));
	printf("%d\n",atoi("    +45254"));
	printf("%d\n",atoi("    -  45254"));
	printf("%d\n",atoi("    ++45254"));
	printf("%d\n",atoi("    -+45254"));
	printf("%d\n",atoi("    -99223372036854775807"));
	printf("==========================\n");
	printf("%d\n",ft_atoi("    \n -452n54"));
	printf("%d\n",ft_atoi("    ---45254"));
	printf("%d\n",ft_atoi("    +45254"));
	printf("%d\n",ft_atoi("    -  45254"));
	printf("%d\n",ft_atoi("    ++45254"));
	printf("%d\n",ft_atoi("    -+45254"));
	printf("%d\n",ft_atoi("    -99223372036854775807"));*/
	/*================ TEST atoi =================*/

	        /*================ TEST SPLIT =================*/
        /*char    **tab;
        int     i;
        i = 0;
        //tab = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse ", ' ');
	//tab = ft_split("hello!zzzzzzzz", 'z');
	//tab = ft_split("      split       this for    me  !       ", ' ');
	tab = ft_split("Tripouille", ' ');
	while (tab[i])
        {
                printf("%s\n", tab[i]);
                i++;
        }
	printf ("%d\n", i);*/
        /*================ TEST SPLIT =================*/

	/*================ TEST ITOA =================*/

	printf("%s\n",ft_itoa(0));
	printf("%s\n",ft_itoa(453));
	printf("%s\n",ft_itoa(-453));
	printf("%s\n",ft_itoa(-2147483648));
	printf("%s\n",ft_itoa(-1234));

	/*================ TEST ITOA =================*/
}
