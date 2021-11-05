/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:09:12 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/05 10:18:59 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t		len_dst;
	size_t		len_src;
	size_t		i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size - 1 <= len_dst)
		return (len_src + size);
	if (!*src)
		return (len_dst);
	i = 0;
	while (src[i])
	{
		*(dst + (len_dst + i)) = *(src + i);
		i ++;
	}
	if (*(dst + (len_dst + i)))
	{
		*(dst + (len_dst + i)) = '\0';
	}
	return (len_dst + len_src);
}
