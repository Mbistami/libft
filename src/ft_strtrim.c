/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:37:27 by gruz              #+#    #+#             */
/*   Updated: 2021/11/10 17:47:15 by mbistami         ###   ########.fr       */
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
	int		start;
	size_t	i;
	char	*result;

	start = 1;
	i = 0;
	result = (char *)s1;
	while (1)
	{
		if (stop(*(result + i), (char *)set))
		{
			if (start != 1)
			{
				result[i + 2] = '\0';
				return (result);
			}
			result = ft_substr(result, i, (ft_strlen(result) - i));
			start = 0;
			i = ft_strlen(result) - 1;
		}
		if (start)
			i++;
		else
		i--;
	}
}
