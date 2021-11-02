/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:01:44 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/02 17:19:42 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const char *src, size_t len)
{
	char		*d;
	const char	*s;

	*d = dest;
	*s = src;
	while (len--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
