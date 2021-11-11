/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:37:27 by gruz              #+#    #+#             */
/*   Updated: 2021/11/11 05:57:08 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	stop(char c, char *set)
{
	while (*set)
	{
		if (*set == c)
			return (0);
		set++;
	}
	return (1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	char	*result;
	size_t	start;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (stop(s1[i], (char *)set) == 0)
		i++;
	start = i;
	if (ft_strlen(s1) > 1)
		i = ft_strlen(s1) - 1;
	while (stop(s1[i], (char *)set) == 0)
		i--;
	result = (char *)ft_substr(s1, start, ((i - start) + 1));
	return (result);
}
