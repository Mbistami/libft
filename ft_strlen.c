/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:32:26 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/04 07:54:37 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t 	ft_strlen(const char *v)
{
	int	counter;
    if (v == NULL)
        return  0;
	counter = 0;
    //printf("%s", v);
	while (v[counter]  != '\0')
    {
        counter++;
    }
	return (counter);
}
