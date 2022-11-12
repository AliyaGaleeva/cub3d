/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:43:11 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:43:12 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned long	i;
	unsigned char	d;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	unsigned char	*ptr_return;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	ptr_return = NULL;
	i = 0;
	d = (unsigned char)c;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		if (ptr_src[i] == d)
		{
			ptr_return = ptr_dst + i + 1;
			return (ptr_return);
		}
		i++;
	}
	return (ptr_return);
}
