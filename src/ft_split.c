/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:02:43 by                   #+#    #+#             */
/*   Updated: 2021/11/10 18:11:04 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_occurrence(const char *s, const char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, const char c)
{
	char	*cursor;
	int		i;
	char	*r;
	char	**to_return;
	char	delimiter[2];
	size_t	matches;

	delimiter[0] = c;
	delimiter[1] = '\0';
	i = 0;
	r = ft_strtrim((char *)s, delimiter);
	to_return = malloc((count_occurrence(s, c) + 1) * sizeof(char *));
	matches = 0;
	while (r[i])
	{
		if (r[i] == c)
		{
			cursor = (char *)ft_substr(r, 0, i);
			cursor = ft_strtrim(cursor, delimiter);
			r = ft_substr(r, i + 1, ((ft_strlen(r) - 1) - i));
			if (ft_strlen(cursor) > 0)
			{
				to_return[matches] = (char *)cursor;
				matches++;
			}
			i = 0;
		}
		if (count_occurrence(r, c) == 0)
			to_return[matches] = r;
		i++;
	}
	return (to_return);
}
