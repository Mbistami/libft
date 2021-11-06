/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruz <gruz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 00:56:01 by gruz              #+#    #+#             */
/*   Updated: 2021/11/06 02:33:49 by gruz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstrn(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*b;
	char	*l;
	size_t	size;

	i = 0;
	b = (char *)big;
	l = (char *)little;
	size = ft_strlen(l);
	if (size == 0)
		return ((char *)big);
	while (len-- && size != i)
	{
		if (*b != *l)
		{
			l = l - i;
			i = 0;
		}
		b++;
		l++;
		i++;
	}
	if (size == i)
		return ((char *)little);
	return (0);
}
