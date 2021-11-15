/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:59:15 by gruz              #+#    #+#             */
/*   Updated: 2021/11/15 15:00:23 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mb, int seachedChar, size_t size)
{
	char	*b;

	b = (char *)mb;
	while (size)
	{
		if (*b == (char)seachedChar)
			return ((void *)b);
		b++;
		size--;
	}
	return (0);
}
