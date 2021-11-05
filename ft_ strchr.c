/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:48:02 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/05 20:16:10 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char	*string, int searchChar)
{
	char	*s;

	s = (char *)string;
	while (*s++)
		if(*s == searchChar)
			return ((char *) string);
	return (0);
}
