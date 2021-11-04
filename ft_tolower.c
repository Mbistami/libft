/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:02:15 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/04 20:46:12 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}