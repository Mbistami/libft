/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 07:08:52 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/04 06:50:06 by mbistami         ###   ########.fr       */
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

int	main(void)
{	
	char	buffer[11];
	size_t	returned;

	printf("%s||", buffer);
	returned
		= ft_strlcpy(buffer, g_overlap_test,
			ft_strlen(g_overlap_test) * sizeof(char));
	printf("%s", buffer);
	printf("%zd", returned);
}
