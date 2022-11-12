/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:45:08 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:45:09 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_malloc_char(size_t len)
{
	char	*rtn_ptr;

	rtn_ptr = malloc(((len + 1) * sizeof(char)));
	if (!(rtn_ptr))
		return (NULL);
	return (rtn_ptr);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rtn_ptr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	rtn_ptr = ft_malloc_char(ft_strlen(s));
	i = 0;
	if (!(rtn_ptr))
		return (NULL);
	else
	{
		while (s[i])
		{
			rtn_ptr[i] = f(i, s[i]);
			i++;
		}
		rtn_ptr[i] = '\0';
	}
	return (rtn_ptr);
}
