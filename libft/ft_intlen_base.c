/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:41:46 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:41:46 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen_base(unsigned long long num, size_t base)
{
	size_t	res;

	res = 0;
	if (num == 0)
	{
		res = 1;
		return (res);
	}
	while (num > 0)
	{
		res++;
		num = num / base;
	}
	return (res);
}
