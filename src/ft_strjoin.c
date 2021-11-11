/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:11:27 by gruz              #+#    #+#             */
/*   Updated: 2021/11/11 03:57:58 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;
	size_t	max_len;

	if (!s1)
		return (NULL);
	max_len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *) ft_calloc(max_len + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	if (sizeof(result) <= 0)
		return (ft_strdup(""));
	ft_strlcpy(result, s1, max_len);
	ft_strlcat(result, s2, max_len + 1);
	return (result);
}