/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:22:12 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/15 22:47:02 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	allocation_size(int n)
{
	size_t	counter;

	counter = 0;
	if (n < 0 || n == 0)
		counter++;
	while (n)
	{
		counter++;
		n = n / 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	long int	i;
	char		*to_return;

	if (n <= -2147483648)
		return (ft_strdup("-2147483648"));
	i = allocation_size(n);
	if (n == 0)
		return (ft_strdup("0"));
	to_return = malloc((allocation_size(n) + 1) * sizeof(*to_return));
	if (to_return == NULL)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		to_return[0] = '-';
	}
	to_return[i--] = '\0';
	while (n)
	{
		to_return[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (to_return);
}
