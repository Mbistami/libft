/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:40:46 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/02 11:51:08 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * memset(void *pointer, int value, size_t count)
{
	int cursor;

	cursor = 0;
	while (cursor != count)
	{
		pointer[cursor] = value;
		cursor++;
	}
	
	printf("%s", pointer);
	return (pointer);	
}
