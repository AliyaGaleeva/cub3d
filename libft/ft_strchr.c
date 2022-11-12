/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:44:42 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:44:43 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*new_ptr;
	char			d;
	size_t			iter;

	iter = 0;
	d = (char)c;
	new_ptr = (char *)s;
	while (s[iter])
	{
		if (s[iter] != d)
			new_ptr++;
		else
			return (new_ptr);
		iter++;
	}
	if (s[iter] == d)
		return (new_ptr);
	else
		return (NULL);
}
