/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:44:15 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:44:15 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_base_converter(unsigned long nb, char *base, unsigned long b_s)
{
	if (nb >= b_s)
	{
		ft_base_converter((nb / b_s), base, b_s);
		ft_putchar_fd(base[(nb % b_s)], 1);
	}
	else
		ft_putchar_fd(base[nb], 1);
}

void	ft_putlnbr_base(unsigned long nb, char *base)
{
	unsigned long		base_size;

	base_size = 0;
	while (base[base_size] != '\0')
		base_size++;
	ft_base_converter(nb, base, base_size);
}
