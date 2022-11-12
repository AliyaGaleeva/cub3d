/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:42:57 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:42:58 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_starter;
	t_list	*new_elem;

	if (!lst || !f)
		return (NULL);
	list_starter = NULL;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&list_starter, del);
			return (NULL);
		}
		ft_lstadd_back(&list_starter, new_elem);
		lst = lst->next;
	}
	return (list_starter);
}
