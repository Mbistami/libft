/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruz <gruz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:11:27 by gruz              #+#    #+#             */
/*   Updated: 2021/11/09 18:23:09 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    char    *result;
    size_t  max_len;

    max_len = ft_strlen(s1) + ft_strlen(s2);
    result = (char *) ft_calloc(max_len + 1, sizeof(char));
    if(result == NULL)
        return (NULL);
    if (sizeof(result) <= 0)
        return (ft_strdup(""));
    ft_strlcpy(result, s1, max_len);
    ft_strlcat(result, s2, max_len + 1);
    return(result);
}