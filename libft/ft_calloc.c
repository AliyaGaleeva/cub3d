/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:41:41 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:41:42 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr_calloc;

	if (count == 0 || size == 0)
	{
		size = 1;
		count = 1;
	}
	ptr_calloc = malloc(count * size);
	if (!(ptr_calloc))
		return (NULL);
	ft_bzero(ptr_calloc, (count * size));
	return (ptr_calloc);
}
