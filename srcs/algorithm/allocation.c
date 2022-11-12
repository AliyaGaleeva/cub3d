/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:39:22 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:39:23 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

/* put to NULL every double arr index */
static void	set_to_null(double **arr, int size)
{
	int				i;

	i = 0;
	while (i < size)
	{
		arr[i] = NULL;
		i++;
	}
}

/* Allocate vertical and horizontal arrays with 2 sub-doubles */
static void	alloc_vert_horiz(t_ray *ray)
{
	int	i;

	i = 0;
	while (i < ray->size_x)
	{
		ray->found_vert[i] = malloc(sizeof(double) * 2);
		if (!ray->found_vert[i])
			free_ray_when_problem(ray, ERR_MALLOC);
		ray->found_vert[i][0] = -1.0;
		ray->found_vert[i][1] = -1.0;
		i++;
	}
	i = 0;
	while (i < ray->size_y)
	{
		ray->found_horiz[i] = malloc(sizeof(double) * 2);
		if (!ray->found_horiz[i])
			free_ray_when_problem(ray, ERR_MALLOC);
		ray->found_horiz[i][0] = -1.0;
		ray->found_horiz[i][1] = -1.0;
		i++;
	}
}

/* Allocate arrays we will need in order to detect intersections */
void	alloc_ray_intersections(t_ray *ray)
{
	int	i;

	ray->found_vert = malloc(sizeof(double *) * ray->size_x);
	if (!ray->found_vert)
		free_ray_when_problem(ray, ERR_MALLOC);
	set_to_null(ray->found_vert, ray->size_x);
	ray->found_horiz = malloc(sizeof(double *) * ray->size_y);
	if (!ray->found_horiz)
		free_ray_when_problem(ray, ERR_MALLOC);
	set_to_null(ray->found_horiz, ray->size_y);
	ray->order = malloc(sizeof(double *) * (ray->size_x + ray->size_y));
	if (!ray->order)
		free_ray_when_problem(ray, ERR_MALLOC);
	set_to_null(ray->order, ray->size_x + ray->size_y);
	alloc_vert_horiz(ray);
	i = -1;
	while (++i < ray->size_x + ray->size_y)
	{
		ray->order[i] = malloc(sizeof(double) * 3);
		if (!ray->order[i])
			free_ray_when_problem(ray, ERR_MALLOC);
		ray->order[i][0] = -1.0;
		ray->order[i][1] = -1.0;
		ray->order[i][2] = 0.0;
	}
}
