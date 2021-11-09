/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:04:40 by gruz              #+#    #+#             */
/*   Updated: 2021/11/09 09:27:12 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_substr(const char *src, unsigned int start, size_t len)
{
    char    *s;
    char    *r;
    size_t  i;

    s = (char *)src + start;
    r = (char *)ft_calloc(ft_strlen(src) + 1, sizeof(char));
    i = 0;
    printf("\n**SubString|S:%d, L:%zu, Src:%s\n",start, len, s);
    if (start == 0 && len == 0)
        return (ft_strdup(""));
    while (len--)
    {
        if(!s[i])
            return(NULL);
        r[i] = s[i];
        i++;
    }
    return (r);
}