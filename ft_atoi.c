/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruz <gruz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 02:40:47 by gruz              #+#    #+#             */
/*   Updated: 2021/11/06 03:20:24 by gruz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *string)
{
	char	*s;
	int		i;
	int		ne;

	s = (char *)string;
	ne = 1;
	i = 0;
	while (*s != '\0')
	{
		printf("\n%d %c %d\n", ft_isdigit(*s), *s, i);
		if (*s != '-' && (*s != '+' && *s != ' '))
			if (ft_isdigit(*s) == 0)
				return (i * ne);
		if (ft_isdigit(*s))
			i = (*s - '0') + (10 * i);
		if (*s == '-')
		{
			if (i == 0)
				ne = -1;
			else
				i = i * -1;
		}
		s++;
	}
	return (i * ne);
}