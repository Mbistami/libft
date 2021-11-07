/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:07:09 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/04 13:35:45 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t		len;
	char		*d;
	char		*s;

	d = dst;
	s = src;
	while (size--)
		*d++ = *s++;
	len = strlen(src);
	*(dst + ft_strlen(dst)) = '\0';
	return (len);
}
