/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:42:51 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:42:52 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	size_t	size;

	if (!lst)
		return (lst);
	size = ft_lstsize(lst);
	while (size - 1 > 0)
	{
		lst = lst->next;
		size--;
	}
	return (lst);
}
