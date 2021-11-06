/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:49:10 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/06 14:55:42 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*s;
	char	*source;
	size_t	len;
	size_t	len_changed;

	source = (char *)src;
	len = ft_strlen(source);
	s = (char *) ft_calloc(len, sizeof(char));
	len_changed = ft_strlcpy(s, source, len);
	return (s);
}
