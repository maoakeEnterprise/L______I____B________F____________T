/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier <mteriier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:18:36 by mteriier          #+#    #+#             */
/*   Updated: 2025/11/13 20:50:40 by mteriier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
//#include <bsd/string.h>
#include <string.h>

int	main(void)
{
	/*================ TEST memset =================*/
	/*char	charmemset[5];
	ft_memset(memset, 97, 5);
	printf("%s\n", charmemset);*/
	/*================ TEST memset =================*/

	/*================ TEST memcpy =================*/
	/*char	origin[5] = "test\0";
	char	copy[5] = "tutu\0";
	ft_memcpy(copy, origin, 5);*/
	/*================ TEST memcpy =================*/

	/*================ TEST memmove =================*/
	/*char	chevauchage[5] = "12345";

	ft_memmove(chevauchage, chevauchage + 2, 5);
	ft_memmove(chevauchage, chevauchage - 2, 5);*/
	/*================ TEST memmove =================*/
	
	/*================ TEST strlcpycat =================*/
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
	/*================ TEST strlcpycat =================*/

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

	/*================ TEST strnstr =================*/
	/*char 	*big = "aaaaaavvvbbbbbb";
	char	*little = "vv";
	printf("%s\n", ft_strnstr(big, little, 25));*/
	/*================ TEST strnstr =================*/

	/*================ TEST strdup =================*/
	//printf("%s\n", ft_strdup("mytest"));
	/*================ TEST strdup =================*/

 	/*================ TEST substr =================*/

	//printf("%s\n", ft_substr("mytes5tisbig?iguess?", 5, 6))

	/*================ TEST substr =================*/

	/*================ TEST strjoin  =================*/

	//printf("%s\n", ft_strjoin("Hello ", "World"));

	/*================ TEST strjoin =================*/
 
	/*================ TEST strtrim =================*/

	//printf("%s\n", ft_strtrim("aaHelloWorldbbaa", "ab"));

	/*================ TEST strtrim =================*/
 
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

	/*printf("%s\n",ft_itoa(0));
	printf("%s\n",ft_itoa(453));
	printf("%s\n",ft_itoa(-453));
	printf("%s\n",ft_itoa(-2147483648));
	printf("%s\n",ft_itoa(-1234));*/

	/*================ TEST ITOA =================*/

	/*================ TEST lstbonus =================*/

	/*t_list	*liste;
	t_list	*newfront;
	t_list	*traveler;
	t_list	*newlast;
	t_list	*last;
	char	stock[5];
	char	*content = "test1";
	char	*content2 = "test2";
	char	*content3 = "test3";

	liste = ft_lstnew(content);
	newfront = ft_lstnew(content2);
	newlast = ft_lstnew(content3);
	ft_lstadd_front(&liste, newfront);
	ft_lstadd_back(&newfront, newlast);
	traveler = newfront;
	while (traveler)
	{
		ft_memcpy(stock, traveler->content, 5);
		printf("%s\n",stock);
		traveler = traveler->next;
	}
	printf("size %d\n", ft_lstsize(newfront));
	last = ft_lstlast(newfront);
	ft_memcpy(stock, last->content, 5);
	printf("%s\n", stock);
	*/
	/*================ TEST lstbonus =================*/
 
}
