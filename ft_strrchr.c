/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:17:32 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/05 20:32:10 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchChar)
{
	char	*s;
	int		len;
	char	*last;
	
	s = (char *)string;
	len = ft_strlen(s);
	s = s + len - 1;
	while (*s--)
		if(*s == searchChar)
			return ((char *) string);

	return (0);
}