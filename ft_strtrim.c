/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:37:27 by gruz              #+#    #+#             */
/*   Updated: 2021/11/09 09:31:45 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int     stop(char c, char *set)
{
    while(*set)
    {
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
    size_t i;
    char    *result;

    start = 1;
    end = 1;
    i = 0;
    result = (char *)s1;
    while (end)
    {
        if(stop(*(result + i), (char  *)set))
        {
            if(start != 1)
            {
                result[i+2] = '\0';
                return (result);
            }
            result = ft_substr(result, i, (ft_strlen(result) - i));
            start = 0;
            i = ft_strlen(result) - 1;
        }
        printf("result now: %s\n", result);
        
        if(start) i++;
        else i--; 
    }
    
}


