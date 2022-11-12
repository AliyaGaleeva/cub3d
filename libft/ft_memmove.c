/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:43:42 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:43:42 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*ptr_dst;
	unsigned char			*ptr_src;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	if (ptr_dst == ptr_src)
		return (ptr_src);
	if (ptr_src < ptr_dst)
	{
		while (len > 0)
		{
			ptr_dst[len - 1] = ptr_src[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(ptr_dst, ptr_src, len);
	return (dst);
}
