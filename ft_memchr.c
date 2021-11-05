/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruz <gruz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:59:15 by gruz              #+#    #+#             */
/*   Updated: 2021/11/06 00:10:00 by gruz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mb, int seachedChar, size_t size)
{
	char	*b;

	b = (char *)mb;
	while (size--)
	{
		printf("\n%c, %d\n", *b, seachedChar);
		if (*(++b) == seachedChar)
			return ((void *)b);
	}
	return (0);
}
