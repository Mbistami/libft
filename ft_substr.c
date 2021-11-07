/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruz <gruz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:04:40 by gruz              #+#    #+#             */
/*   Updated: 2021/11/07 14:14:54 by gruz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_substr(const char *src, unsigned int start, size_t len)
{
    char    *s;
    char    *r;
    size_t  i;

    s = (char *)src + start;
    r = (char *)ft_calloc(sizeof(*s), (len - 1));
    i = 0;
    printf("\nS:%d, L:%d, Src:%s\n",start, len, src);
    while (len--)
    {
        if(!*(s+i))
            return (0);
        *(r + i) = *(s + i);
        i++;
    }
    return (r);
}