/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruz <gruz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 00:21:44 by gruz              #+#    #+#             */
/*   Updated: 2021/11/06 00:32:44 by gruz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t length)
{
	char	*p1;
	char	*p2;

	p1 = (char *)ptr1;
	p2 = (char *)ptr2;
	while (length--)
	{	
		if (*(++p1) != *(++p2))
		{
			if (*p2 - *p1 > 0)
				return (1);
			return (-1);
		}
	}
	return (0);
}
