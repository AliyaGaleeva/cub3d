/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:43:24 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:43:24 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	size_t					stopper;
	int						dif;
	unsigned char			*ptr_s1;
	unsigned char			*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	dif = 0;
	stopper = 0;
	while (i < n && stopper == 0)
	{
		if (ptr_s1[i] != ptr_s2[i])
		{
			dif = ptr_s1[i] - ptr_s2[i];
			stopper++;
		}
		i++;
	}
	return (dif);
}
