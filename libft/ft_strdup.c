/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:44:47 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:44:48 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	char				*copy;
	unsigned long		sizer;

	sizer = ft_strlen(s1) + 1;
	copy = malloc(sizer * (sizeof(char)));
	if (!(copy))
		return (NULL);
	ft_strcpy(copy, s1);
	return (copy);
}
