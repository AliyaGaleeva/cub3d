/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:44:56 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:44:57 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_size_dest(char *dst, size_t n)
{
	size_t		res;
	size_t		size;
	char		*d;

	d = (char *)dst;
	res = 0;
	size = n;
	while (*d != '\0' && size != 0)
	{
		res++;
		d++;
		size--;
	}
	return (res);
}

static size_t	ft_total_counter(char *dst, const char *src, size_t n)
{
	size_t		res;

	res = ft_strlen(src) + ft_count_size_dest(dst, n);
	if (n < ft_count_size_dest(dst, n))
		res = ft_strlen(src) + n;
	return (res);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t						total_counter;
	size_t						n;
	const unsigned char			*s;
	unsigned char				*d;

	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	n = dstsize;
	total_counter = ft_total_counter(dst, src, n);
	if (n == 0 || (n <= (ft_count_size_dest(dst, n))))
		return (total_counter);
	while (n-- && *d != '\0' && n != 0)
		d++;
	while (*s != '\0')
	{
		if (n != 0)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (total_counter);
}
