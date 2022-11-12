/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:44:19 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:44:20 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlnbr_fd(long long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * (-1);
	}
	if (n >= 10)
	{
		ft_putlnbr_fd((n / 10), fd);
		ft_putchar_fd(((n % 10) + '0'), fd);
	}
	else if (n < 10)
		ft_putchar_fd((n + '0'), fd);
}
