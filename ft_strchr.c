/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:48:02 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/15 15:07:10 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char	*string, int searchChar)
{
	char	*s;
	int		i;

	s = (char *)string;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)searchChar)
			return (&s[i]);
		i++;
	}
	if (s[i] == '\0' && (char)searchChar == '\0')
		return (&s[i]);
	return (NULL);
}
