/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:17:32 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/16 02:12:36 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchChar)
{
	char	*s;
	int		i;

	s = (char *)string;
	i = ft_strlen(string);
	while (i != -1)
	{
		if (i != -1 && s[i] == (char)searchChar)
			return (&s[i]);
		i--;
	}
	i = 0;
	if (s[i] == '\0' && (char)searchChar == '\0')
		return (&s[i]);
	return (0);
}
