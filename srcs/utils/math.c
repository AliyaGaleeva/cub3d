/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:37:01 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/12 19:57:46 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

double	ceil_double(double nb)
{
	double		tmp;

	tmp = nb;
	if (nb - (int)nb > 0.99999)
		tmp = (int)nb + 1;
	if (nb - (int)nb < 0.00001)
		tmp = (int)nb;
	return (tmp);
}

/* Calculate the distance between 2 points */

double	calc_dist(double x1, double y1, double x2, double y2)
{
	double	dist;

	dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return (dist);
}
