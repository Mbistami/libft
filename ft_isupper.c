/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:57:52 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/01 20:57:53 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int v) // if Upper returns 1 else 0
{
	if (v >= 65 && v <= 90)
		return (1);
	return (0);
}
