/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 02:40:47 by gruz              #+#    #+#             */
/*   Updated: 2021/11/11 03:45:33 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	calculate_return(int ne)
{
	if (ne > 0)
		return (-1);
	else
		return (0);
}

int	atoi_process(int ne, char *s, long int i)
{
	while (*s != '\0')
	{
		if (i > 999999998)
		{
			return (calculate_return(ne));
		}
		if (((*s != '-') && *s != '\r') && ((*s != '+') && (*s != '\f')))
			if ((*s != '\n' && *s != '\t') && (*s != ' ' && *s != '\v'))
				if (ft_isdigit(*s) == 0)
					return (i * ne);
		if (ft_isdigit(*s))
			i = (*s - '0') + (10 * i);
		if (*s == '-' || *s == '+')
		{
			if (ft_isdigit(*(s + 1)) == 0)
				return (0);
			if (i == 0 && *s == '-')
				ne = -1;
			else
				i = i * -1;
		}
		s++;
	}
	return (i * ne);
}

int	ft_atoi(const char *string)
{
	char		*s;
	long int	i;
	int			ne;

	s = (char *)string;
	ne = 1;
	i = 0;
	return (atoi_process(ne, s, i));
}
