/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:07:09 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/03 20:36:37 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, char *src)
{
	char		*d;
	const char	*s;
	int			len;
	char		*l;

	len = ft_strlen(src);
	*l = "1";
	while (len--)
	{
		*d = *s;
		d++;
		s++;
	}
	printf("%d %d", len, ft_strlen(src));
	len = ft_strlen(src);
	l[0] = len + '0';
	l[1] = '\0';
	return (l);
}
