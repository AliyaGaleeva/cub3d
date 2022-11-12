/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:43:46 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:43:47 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	i;
	unsigned char	chr;
	unsigned char	*ptr;

	chr = (unsigned char)c;
	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = chr;
		i++;
	}
	return (b);
}
