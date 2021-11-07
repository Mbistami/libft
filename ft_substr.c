/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruz <gruz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:04:40 by gruz              #+#    #+#             */
/*   Updated: 2021/11/06 20:06:02 by gruz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_substr(const char *src, unsigned int start, size_t len)
{
    char    *s;
    char    *r;

    s = (char *)src + start;
    r = (char *)malloc(sizeof(*s) * (len - 1));
    printf("%s\n%s", s, r);
    while (len--)
    {
        *r = 'x';
    }
    printf("%s", r);
    return (r);
}