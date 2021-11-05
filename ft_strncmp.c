/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruz <gruz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:24:28 by gruz              #+#    #+#             */
/*   Updated: 2021/11/05 23:56:47 by gruz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	char	*f;
	char	*s;

	f = (char *)first;
	s = (char *)second;
	while (length--)
	{
		if (*f != *s)
			return (*f - *s);
		s++;
		f++;
	}
	return (0);
}
