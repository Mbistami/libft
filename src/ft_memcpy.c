/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:01:44 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/09 18:02:13 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const char *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
    if(dest == NULL && src == NULL)
        return (NULL);
	while (len--)
		*d++ = *s++;
	return (dest);
}
