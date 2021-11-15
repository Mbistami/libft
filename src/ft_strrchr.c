/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:17:32 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/14 22:26:42 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchChar)
{
	char	*s;
	size_t	i;
	char	c;

	s = (char *)string;
	i = ft_strlen(string);
	c = (char)searchChar;
	while (i != (size_t)-1)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	if (s[i] == '\0' && c == '\0')
		return (&s[i]);
	return (0);
}
