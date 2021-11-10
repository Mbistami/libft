/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:49:10 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/09 18:17:38 by                  ###   ########.fr       */
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
	s = (char *) malloc((len + 1) * sizeof(char));
    if(s == NULL)
        return (NULL);
	ft_strlcpy(s, source, sizeof(s));
	return (s);
}
