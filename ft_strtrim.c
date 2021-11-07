/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruz <gruz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:37:27 by gruz              #+#    #+#             */
/*   Updated: 2021/11/07 14:42:44 by gruz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int     stop(char c, char *set)
{
    while(*set)
    {
        printf("%c|%c\n", c, *set);
        if(*set == c)
        {
            printf("Found continue return 0 stop()\n");
            return(0);
        }
        set++;
    }
    printf("Found continue return 1 stop()\n");
    return (1);
}

char    *ft_strtrim(const char *s1, const char *set)
{
    int start;
    int end;
    ssize_t i;
    char    *result;

    start = 1;
    end = 1;
    i = 0;
    result = s1;
    while (end)
    {
        if(stop(*(result + i), set))
        {
            if(start != 1)
            {
                result[i + 1] = '\0';
                return (result);
            }
            result = ft_substr(result, i, (ft_strlen(result) - i));
            printf("*****swapping!");
            start = 0;
            i = ft_strlen(result) - 1;
        }
        printf("result now: %s\n", result);
        if(start) i++;
        else i--; 
    }
    
}
