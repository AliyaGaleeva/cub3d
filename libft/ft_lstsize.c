/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:43:06 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:43:07 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t		size;
	t_list		*lst_2;

	if (!lst)
		return (0);
	lst_2 = lst;
	size = 0;
	while (lst_2 != NULL)
	{
		size++;
		lst_2 = lst_2->next;
	}	
	return (size);
}
