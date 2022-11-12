/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:45:56 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:45:57 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_gnl(const char *s)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

char	*ft_strchr_gnl(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_mallocable(char *patch)
{
	int		i;
	char	*str;

	str = NULL;
	i = 0;
	if (!patch[i])
		return (NULL);
	while (patch[i] && patch[i] != '\n')
		i++;
	if (patch[i] == '\n')
		str = malloc(sizeof(char) * (i + 2));
	else if (patch[i] == '\0')
		str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	return (str);
}
