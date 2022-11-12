/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:45:17 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:45:17 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*ptn;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	ptn = (char *)haystack;
	if (needle[0] == '\0')
		return (ptn);
	while (ptn[i] && i < len)
	{
		if (ptn[i] == needle[j])
		{
			while (ptn[i + j] == needle[j] && (i + j) < len)
			{
				if (needle[j + 1] == '\0')
					return (ptn + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
