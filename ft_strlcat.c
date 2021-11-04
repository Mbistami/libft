/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:09:12 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/04 13:34:46 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t		len;
	char		*d;
	char		*s;

	d = dst;
	s = src;
	while (size--)
		*d++ = *s++;
	len = strlen(src);
	return (len);
}
