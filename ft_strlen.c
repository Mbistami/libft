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

int	ft_strlen(char *v)
{
	int	counter;

	counter = 0;
	while (*v++)
		counter++;
	return (counter);
}
