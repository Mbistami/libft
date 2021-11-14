/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 07:08:52 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/14 20:13:57 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			g_string[] = "33tas kkk ooo !@@#$$%";
char			g_string_dest[10] = "data1";
char			g_overlap_test[] = "hello world";

	// printf("%d|", ft_isupper('z')); // returns positive if uppercase.
	// printf("%d|", ft_isdigit('5')); // returns positive if digit.
	// printf("%d|", ft_isalpha('+'));	// returns positive if alphanumeric.
	// printf("%d|", ft_isalnum('2')); // returns positive if number.
	// for(int c = 1; c <= 127; ++c) // testing isprint()
	// if (ft_isprint(c)!= 0)
	//          printf("%c ", c);
	// printf("%d", ft_strlen("ssss\0ssss"));
	// printf("%s",string);
	//char *p = memset(string, 'a', 2);
	// char *p1 = ft_memset(string, 'a', 2);
	// printf("\n%s | %s", p, p1);
	//printf("%s", ft_bzero(string, 5));
	// printf("before copy %s\n", g_overlap_test);
	// ft_memmove(g_overlap_test, g_overlap_test + 2, 2);
	// printf("after copy %s\n", g_overlap_test);
	// printf("%s||", buffer);
	// returned
	// 	= ft_strlcpy(buffer, g_overlap_test,
	// 		sizeof(g_overlap_test));
	// printf("%s len: %zd", buffer, returned);
	// printf("%c", ft_tolower('H'));
	// printf("%c", ft_toupper('v'));
	//printf("\nft_strlcat return: %ld\nnew buffer : %s",
	//	ft_strlcat(buffer, "THIS IS THE FINAL TEST", sizeof(buffer)), buffer);
	//printf("\n%d", strncmp("hellossssA", "helloFss", sizeof("aellAsssss")));
	//printf("\n%p", ft_memchr("AhDlls", 68, sizeof("AhlllsD")));
	//printf("\n%d", ft_memcmp("AhDllssss", "shDlls", sizeof("AhDllssss")));
	//  printf("\n%s", ft_strnstrn("THIS IS THE zf FINAL TEST z", "",
	// sizeof("THIS IS THE FINAL TEST")));
	// "printf("starting strlcat\nsrc : %s\nlen src: %d\nbuffer: %s",
	// 	g_overlap_test,
	// 	ft_strlen(g_overlap_test),
	// 	buffer);
	// printf("\nft_atoi result:%d", ft_atoi("   -12235"));
	//buffer = (char *)strdup("SSSSS");
	//printf("%s", buffer);
	//printf("||%s||", ft_substr("Source", 2, 3));
	//printf("(%s)", ft_strjoin("car1231c\0 1232", "sdadadsdadadsdadad"));
	//printf("%s", ft_strdup("text"));

char	test(unsigned int i, char c)
{
	return (c);
}

int	main(void)
{
	char	string[] = "ong   string areasd !    ";
	char	**returned;

	char **f;
	
	returned = ft_split(string, ' ');
	//free(f);

	for(int i = 0; returned[i] != NULL; i++)
	{
		printf("$%s$\n", returned[i]);
		//free(returned[i]);
	}

	printf("%s", ft_strchr("test", 't' + 256));
	//free(returned);
}
