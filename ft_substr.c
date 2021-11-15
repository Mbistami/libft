/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:04:40 by gruz              #+#    #+#             */
/*   Updated: 2021/11/15 14:37:38 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	size_t	len_src;

	i = 0;
	if (!src)
		return (NULL);
	len_src = ft_strlen(src);
	if (start > len_src)
		return (ft_strdup(""));
	if (len_src < len)
		r = (char *)malloc((len_src + 1) * sizeof(*src));
	else
		r = (char *)malloc((len + 1) * sizeof(*src));
	if (!r)
		return (NULL);
	while (i < len)
	{
		if (!src[i + start])
			return (r);
		r[i] = src[i + start];
		i++;
	}
	r[i] = '\0';
	return (r);
}
