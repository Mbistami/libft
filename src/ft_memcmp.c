/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruz <gruz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 00:21:44 by gruz              #+#    #+#             */
/*   Updated: 2021/11/09 18:34:33 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t length)
{
	char	*p1;
	char	*p2;
    size_t  i;

	p1 = (char *)ptr1;
	p2 = (char *)ptr2;
    i = 0;
	while (length-- && (p1[i] || p2[i]))
	{
		if (p1[i] != p2[i])
			return (p2[i] - p1[i]);
        i++;
	}
	return (0);
}
