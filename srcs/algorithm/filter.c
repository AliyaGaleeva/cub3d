/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:39:28 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:39:29 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

/* Insert into the vertical array */
static void	vertical_valid(t_ray *ray, int idx, int *i)
{
	ray->order[idx][0] = ray->found_vert[*i][0];
	ray->order[idx][1] = ray->found_vert[*i][1];
	ray->order[idx][2] = 1;
	(*i)++;
}

/* Insert into the horizontal array */
static void	horizontal_valid(t_ray *ray, int idx, int *j)
{
	ray->order[idx][0] = ray->found_horiz[*j][0];
	ray->order[idx][1] = ray->found_horiz[*j][1];
	ray->order[idx][2] = 0;
	(*j)++;
}

/* Called when we need to choose between the horizontal and vertical ones */
static void	both_valid(t_ray *ray, int idx, int *i, int *j)
{
	if (calc_dist(ray->start_x, ray->start_y, ray->found_vert[*i][0], \
	ray->found_vert[*i][1]) < calc_dist(ray->start_x, ray->start_y, \
	ray->found_horiz[*j][0], ray->found_horiz[*j][1]))
		vertical_valid(ray, idx, i);
	else
		horizontal_valid(ray, idx, j);
}

/* Create a new array containing all intersections point (from our both arrays) 
order by distance */
void	create_inter_array(t_ray *ray)
{
	int	i;
	int	j;
	int	idx;

	i = 0;
	j = 0;
	idx = 0;
	while (i < ray->size_x || j < ray->size_y)
	{
		if (i < ray->size_x && j < ray->size_y && \
		ray->found_vert[i][0] != -1 && ray->found_horiz[j][0] != -1)
			both_valid(ray, idx, &i, &j);
		else if (i < ray->size_x && ray->found_vert[i][0] != -1)
			vertical_valid(ray, idx, &i);
		else if (j < ray->size_y && ray->found_horiz[j][0] != -1)
			horizontal_valid(ray, idx, &j);
		else
			break ;
		idx++;
	}
}
