/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:48:02 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/14 20:18:44 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char	*string, int searchChar)
{
	char	*s;
	size_t	i;

	if (ft_isascii(searchChar) == 0)
		return ((char *)string);
	s = (char *)string;
	i = 0;
	while (s[i])
	{
		if (s[i] == searchChar)
			return (&s[i]);
		i++;
	}
	if (s[i] == '\0' && searchChar == '\0')
		return (&s[i]);
	return (NULL);
}
