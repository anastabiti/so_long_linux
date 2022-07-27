/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f2.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 10:02:35 by atabiti           #+#    #+#             */
/*   Updated: 2022/03/25 11:21:45 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_p_0(struct s_s2 *a)
{
	if (a->exactarray [a->i][a->r] == 'P')
	{
		a->img = mlx_xpm_file_to_image(a->mlx,
				a->zoro, &a->img_width, &a->img_height);
		mlx_put_image_to_window(a->mlx, a->win, a->img, a->w, a->h);
		a->x = a->w;
		a->y = a->h;
		a->y_p = a->i;
		a->x_p = a->r;
		a->starting_pos += 1;
		a->w = a->w + 50;
	}
	else if (a->exactarray [a->i][a->r] == '0')
	{
		a->img = mlx_xpm_file_to_image(a->mlx,
				a->empty, &a->img_width, &a->img_height);
		mlx_put_image_to_window(a->mlx, a->win, a->img, a->w, a->h);
		a->w = a->w + 50;
	}
}

void	ft_c_e(struct s_s2 *a)
{
	if (a->exactarray [a->i][a->r] == 'C')
	{
		a->img = mlx_xpm_file_to_image(a->mlx,
				a->treasure, &a->img_width, &a->img_height);
		mlx_put_image_to_window(a->mlx, a->win, a->img, a->w, a->h);
		a->collectible += 1;
		a->w = a->w + 50;
	}
	else if ((*a).exactarray [a->i][a->r] == 'E')
	{
		a->img = mlx_xpm_file_to_image(a->mlx,
				a->door, &a->img_width, &a->img_height);
		mlx_put_image_to_window(a->mlx, a->win, a->img, a->w, a->h);
		a->ft_exit += 1;
		a->w = a->w + 50;
	}
	ft_p_0(a);
}

void	ft_exactmalloc(struct s_s2 *a)
{
	a->exactarray = malloc((a->linelenght * a->stringscount) * sizeof(char));
	if (!a->exactarray)
	{
		ft_free(a->new, a->to_free);
		exit(1);
	}
	ft_memmove(a->exactarray, a->new, a->linelenght * a->stringscount);
	a->mlx = mlx_init();
	a->win = mlx_new_window(a->mlx, a->width, a->height,
			"SO_LONG GAME BY: ANAS TABITI");
	a->h = 0;
	a->w = 0;
}
