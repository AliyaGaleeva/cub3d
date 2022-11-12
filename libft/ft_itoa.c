/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:42:18 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:42:19 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	ft_int_sizer(int n)
{
	long long	size;
	long long	long_n;

	size = 1;
	long_n = n;
	if (long_n < 0)
	{
		size++;
		long_n = (long_n * (-1));
	}
	while (long_n >= 10)
	{
		size++;
		long_n = long_n / 10;
	}
	return (size);
}

static long long	ft_power(long long len_integer, long long i)
{
	long long	multiplicator;

	multiplicator = 1;
	len_integer = len_integer - i;
	while (len_integer > 1)
	{
		multiplicator = multiplicator * 10;
		len_integer--;
	}
	return (multiplicator);
}

static char	*ft_string_fulfiller(char *str, long long long_n, long long len)
{
	long long	i;
	long long	multiplicator;

	i = 0;
	if (long_n < 0)
	{
		str[0] = '-';
		long_n = long_n * (-1);
		i++;
	}
	str[len] = '\0';
	multiplicator = ft_power(len, i);
	while (len > i)
	{
		str[i] = ((long_n / multiplicator) + '0');
		long_n = long_n % multiplicator;
		multiplicator = (multiplicator / 10);
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*int_string;
	long long int	long_n;
	long long int	len_integer;

	long_n = n;
	len_integer = ft_int_sizer(n);
	int_string = malloc((len_integer + 1) * (sizeof(char)));
	if (!(int_string))
		return (NULL);
	int_string = ft_string_fulfiller(int_string, long_n, len_integer);
	return (int_string);
}
