/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crosshair.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdanyel <wdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:39:05 by wdanyel           #+#    #+#             */
/*   Updated: 2022/11/05 19:39:06 by wdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

/* display a minimalistic standard FPS-style crosshair
in the center of the screen */

void	render_crosshair(t_game *game, int img_index)
{
	int			center_x;
	int			center_y;
	int			i;
	int			j;

	center_x = game->wdw_x / 2;
	center_y = game->wdw_y / 2;
	i = -10;
	j = -10;
	while (i < 10)
	{	
		mlx_pixel_put_to_img(game->imgs_set[img_index],
			center_x + i, center_y, 0x0000000);
		i++;
	}
	while (j < 10)
	{
		mlx_pixel_put_to_img(game->imgs_set[img_index],
			center_x, center_y + j, 0x0000000);
		j++;
	}
}
