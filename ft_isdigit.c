/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruz <gruz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:56:00 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/06 02:46:58 by gruz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int v)
{
	if (v >= 48 && v <= 57)
		return (1);
	else
		return (0);
}
