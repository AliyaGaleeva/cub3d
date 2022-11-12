/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:43:17 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:43:17 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptn_finder;
	unsigned char	*ptn_s;
	unsigned char	us_c;
	unsigned long	i;

	us_c = (unsigned char)c;
	ptn_s = (unsigned char *)s;
	ptn_finder = NULL;
	i = 0;
	while (i < n)
	{
		if (ptn_s[i] == us_c)
		{
			ptn_finder = ptn_s + i;
			return ((void *)ptn_finder);
		}
		i++;
	}
	return ((void *)ptn_finder);
}
