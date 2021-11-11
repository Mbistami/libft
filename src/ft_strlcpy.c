/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:07:09 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/11 01:10:27 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t length)
{
	size_t	len_src;

	len_src = ft_strlen(src);
	if (len_src + 1 < length)
		ft_memcpy(dst, src, len_src + 1);
	else if (length != 0)
	{
		ft_memcpy(dst, src, length - 1);
		dst[length - 1] = '\0';
	}
	return (len_src);
}
