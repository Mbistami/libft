/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:04:40 by gruz              #+#    #+#             */
/*   Updated: 2021/11/10 17:42:23 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	char	*s;
	char	*r;
	size_t	i;

	s = (char *)src + start;
	r = (char *)ft_calloc(ft_strlen(src) + 1, sizeof(char));
	if (r == NULL)
		return (NULL);
	i = 0;
	if (start == 0 && len == 0)
		return (ft_strdup(""));
	while (len--)
	{
		if (!s[i])
			return (NULL);
		r[i] = s[i];
		i++;
	}
	return (r);
}
