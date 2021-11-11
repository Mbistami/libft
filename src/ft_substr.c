/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:04:40 by gruz              #+#    #+#             */
/*   Updated: 2021/11/11 05:31:41 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	char	*s;
	char	*r;
	size_t	i;

	i = 0;
	if (!src)
		return (NULL);
	if (ft_strlen(src) <= start)
		return (ft_strdup(""));
	s = (char *)src + start;
	r = (char *)malloc((len + 1) * sizeof(*src));
	if (r == NULL)
		return (NULL);
	if (start == 0 && len == 0)
		return (ft_strdup(""));
	if (start >= ft_strlen(src))
		return (ft_strdup(""));
	while (len--)
	{
		if (!s[i])
			return (NULL);
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
