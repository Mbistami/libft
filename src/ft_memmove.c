/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 07:06:38 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/12 22:34:22 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	char		*d;
	char		*s;
	char		*lasts;
	char		*lastd;

	d = dest;
	s = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		lasts = (char *)s + (len - 1);
		lastd = d + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
