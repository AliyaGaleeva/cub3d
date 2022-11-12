/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:45:23 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:45:23 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*ptn;
	char			d;

	ptn = (char *)s;
	i = ft_strlen(s);
	d = (char)c;
	while (i >= 0)
	{
		if (ptn[i] == d)
			return (ptn + i);
		i--;
	}
	return (NULL);
}
