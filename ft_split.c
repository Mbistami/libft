/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:02:43 by                   #+#    #+#             */
/*   Updated: 2021/11/08 18:51:20 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     countOccurrence(const char *s,const char c)
{
    size_t count;
    size_t i;

    count = 0;
    i = 0;
    while (s[i])
    {
        if(s[i] == c)
            count++;
        i++;
    }
    return (count);
}

char    **ft_split(char const *s, const char c)
{
    char    *cursor;
    int     i;
    char    *r;
    printf("**Occurrence Found: %d\n**Source: %s\n**Delimiter: %c", countOccurrence(s, c), s, c);
    i = 0;
    r = (char *)s;
    while (r[i])
    {
        if (r[i] == c)
        {
            cursor = (char *)ft_substr(r, 0, i);
            printf("\n**Len:  cursor data: %zu", ft_strlen(cursor));
        }
        i++;
    }
}