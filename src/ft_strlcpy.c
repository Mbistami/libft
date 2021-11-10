/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:07:09 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/09 17:57:41 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size_of_dst)
{
	size_t		len;
	char		*d;
	char		*s;
    size_t      i;

	d = dst;
	s = (char *)src;
    i = 0;
	while (src[i])
    {
        dst[i] = s[i];
        i++;
    }
	len = strlen(src);
	*(dst + (len)) = '\0';
	return (len);
}
