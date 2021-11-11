/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:02:43 by                   #+#    #+#             */
/*   Updated: 2021/11/11 10:19:57 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*g_delimiter[2];

int	count_occurrence(const char *s, const char c)
{
	size_t	count;
	size_t	i;

	if (!s || !c)
		return (NULL);
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

void	make_delimiter(char c, size_t *matches, size_t *i)
{
	g_delimiter[0] = c;
	g_delimiter[1] = '\0';
	*matches = 0;
	*i = 0;
}

char	*generate_cursor(char	*r, size_t i)
{
	char	*cursor;

	cursor = (char *)ft_strtrim(ft_substr(r, 0, i), g_delimiter);
	return (cursor);
}

char	**split_loop(char *r, const char c, char **to_return, size_t matches)
{
	char	*cursor;
	size_t	i;

	i = 0;
	while (r[i])
	{
		if (r[i] == c)
		{
			cursor = generate_cursor(r, i);
			r = ft_substr(r, i + 1, ((ft_strlen(r) - 1) - i));
			if (ft_strlen(cursor) > 0)
			{
				to_return[matches] = (char *)cursor;
				matches++;
			}
			i = 0;
		}
		if (count_occurrence(ft_strtrim(r, g_delimiter), c) == 0)
		{
			to_return[matches] = ft_strtrim(r, g_delimiter);
			to_return[matches + 1] = NULL;
		}
		i++;
	}
	return (to_return);
}

char	**ft_split(char const *s, const char c)
{
	size_t	i;
	char	*r;
	char	**to_return;
	size_t	matches;

	if (!s || (!c && c != '\0'))
		return (NULL);
	make_delimiter(c, &matches, &i);
	r = ft_strtrim((char *)s, g_delimiter);
	if (s[0] == '\0')
	{
		to_return = malloc(sizeof(char *) * 2);
		if (!to_return)
			return (NULL);
		to_return[0] = NULL;
		return (to_return);
	}
	to_return = malloc((count_occurrence(s, c) + 1) * sizeof(char *));
	if (!to_return)
		return (NULL);
	to_return = (char **)split_loop(r, c, to_return, matches);
	if (!to_return)
		return (NULL);
	return (to_return);
}
