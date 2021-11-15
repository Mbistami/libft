/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 02:48:22 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/15 03:41:45 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*to_return;

	while (lst != NULL)
	{
		ft_lstadd_back(&to_return, ft_lstnew(f(lst->content)));
		if (f(lst->content) == NULL)
			ft_lstiter(to_return, del);
		lst = lst->next;
	}
	return (to_return);
}
