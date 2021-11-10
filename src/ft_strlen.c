/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:32:26 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/09 18:27:20 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t 	ft_strlen(const char *v)
{
	int	counter;
    if (v == NULL)
        return  0;
	counter = 0;
	while (v[counter])
        counter++;
	return (counter);
}
