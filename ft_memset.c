/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:40:46 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/04 07:30:36 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	cursor;

	cursor = 0;
	while (cursor < count)
	{
		((unsigned char *)pointer)[cursor] = (unsigned char)value;
		cursor++;
	}
	return (pointer);
}
