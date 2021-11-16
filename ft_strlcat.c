/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:09:12 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/16 01:57:22 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	unsigned int		i;
	unsigned int		dest_l;
	unsigned int		src_l;

	dest_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	i = 0;
	if (dstsize == 0 || dstsize <= dest_l)
		return (dstsize + src_l);
	while (i < src_l && i < dstsize - dest_l - 1)
	{
		dst[dest_l + i] = src[i];
		i++;
	}
	dst[dest_l + i] = '\0';
	return (src_l + dest_l);
}
