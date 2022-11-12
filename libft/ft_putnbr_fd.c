/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:44:24 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:44:25 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	long_n;

	long_n = n;
	if (long_n < 0)
	{
		ft_putchar_fd('-', fd);
		long_n = long_n * (-1);
	}
	if (long_n >= 10)
	{
		ft_putnbr_fd((long_n / 10), fd);
		ft_putchar_fd(((long_n % 10) + '0'), fd);
	}
	else if (long_n < 10)
		ft_putchar_fd((long_n + '0'), fd);
}
