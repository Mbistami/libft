/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:33:48 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/13 05:16:34 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*to_return;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	to_return = malloc((ft_strlen(s) + 1) * sizeof(*s));
	if (to_return == NULL)
		return (NULL);
	while (s[i])
	{
		to_return[i] = f(i, s[i]);
		i++;
	}
	to_return[i] = '\0';
	return (to_return);
}
