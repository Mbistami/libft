/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruz <gruz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:04:40 by gruz              #+#    #+#             */
/*   Updated: 2021/11/08 18:49:33 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_substr(const char *src, unsigned int start, size_t len)
{
    char    *s;
    char    *r;
    size_t  i;

    s = (char *)src + start;
    r = (char *)ft_calloc(ft_strlen(src) + 10, sizeof(char));
    i = 0;
    printf("\n**SubString|S:%d, L:%zu, Src:%s\n",start, len, src);
    if (start == 0 && len == 0)
        return (ft_strdup(""));
    while (s[i])
    {
        r[i] = s[i];
        printf("\n%c, %c\n", r[i], s[i]);
        i++;
    }
    return (r);
}