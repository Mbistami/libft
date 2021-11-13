/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:02:43 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/13 03:35:02 by mbistami         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**to_return;
	size_t	saved;

	i = 0;
	j = 0;
	saved = 0;
	to_return = malloc((count_words(s, c) + 1) * sizeof(*to_return));
	while (saved != count_words(s, c))
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] != c && s[j] != '\0')
			j++;
		printf("%d, |%d|, %d\n", i, j, count_words(s, c));
		to_return[saved] = ft_substr(s, i, j - i);
		i = j;
		saved++;
	}
	to_return[saved] = NULL;
	return (to_return);
}
