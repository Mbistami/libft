/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:02:43 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/15 00:10:48 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	count_words(char *str, char c)
{
	int	state;
	int	wc;

	wc = 0;
	state = 1;
	while (*str)
	{
		if (*str == c)
			state = 1;
		else if (state == 1)
		{
			state = 0;
			++wc;
		}
		++str;
	}
	return (wc);
}

void	init(size_t *i, size_t *j, size_t *s)
{
	*i = 0;
	*j = 0;
	*s = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**to_return;
	size_t	saved;

	init(&i, &j, &saved);
	if (!s || (!c && c != '\0'))
		return (NULL);
	to_return = malloc((count_words((char *)s, c) + 1) * sizeof(*to_return));
	if (!to_return)
		return (NULL);
	while (saved != (size_t)count_words((char *)s, c))
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] != c && s[j] != '\0')
			j++;
		to_return[saved] = ft_substr((char *)s, i, j - i);
		i = j;
		saved++;
	}
	to_return[saved] = NULL;
	return (to_return);
}
