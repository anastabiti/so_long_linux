/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 08:45:08 by atabiti           #+#    #+#             */
/*   Updated: 2022/07/27 18:43:47 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
/*
Keycodes :
ESC = 53
W = 13 
A = 0
S = 1
D =  2
*/

int	deal_key(int key, struct s_s2 *a)
{
	if (key == 65307)
	{
		ft_free(a->exactarray, a->to_free + 1);
		exit(1);
	}
	ft_key_a(key, a);
	ft_key_d(key, a);
	ft_key_w(key, a);
	ft_key_s(key, a);
	return (0);
}

void	put_image(struct s_s2 *a, char *filename)
{
	int	res;

	res = 50;
	a->img = mlx_xpm_file_to_image(a->mlx, filename, &res, &res);
	mlx_put_image_to_window(a->mlx, a->win, a->img, a->x, a->y);
	mlx_destroy_image(a->mlx, a->img);
}
