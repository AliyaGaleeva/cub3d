/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:45:12 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:45:13 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	iter;

	iter = 0;
	if (n == 0)
		return (0);
	while (iter < n - 1 && s1[iter] && s2[iter] && s1[iter] == s2[iter])
		iter++;
	return ((unsigned char)s1[iter] - (unsigned char)s2[iter]);
}
