/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:59:15 by gruz              #+#    #+#             */
/*   Updated: 2021/11/09 17:57:41 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mb, int seachedChar, size_t size)
{
	char	*b;

	b = (char *)mb;
	while (size-- && *b)
	{
		if (*(++b) == seachedChar)
			return ((void *)b);
	}
	return (0);
}
