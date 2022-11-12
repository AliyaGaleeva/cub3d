/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:42:27 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:42:28 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{	
	t_list	*last_elem;

	if (!*alst)
	{
		*alst = new;
		return ;
	}
	if (alst && new)
	{
		last_elem = ft_lstlast(*alst);
		last_elem->next = new;
	}
}
