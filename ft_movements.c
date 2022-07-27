/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 10:43:13 by atabiti           #+#    #+#             */
/*   Updated: 2022/03/20 09:32:38 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_move_up(struct s_s2 *a)
{
	put_image(a, "./xpms/empty.xpm");
	a->y -= 50;
	put_image(a, "./xpms/zoro.xpm");
	return (0);
}

int	ft_move_down(struct s_s2 *a)
{
	put_image(a, "./xpms/empty.xpm");
	a->y += 50;
	put_image(a, "./xpms/zoro.xpm");
	return (0);
}

int	ft_move_right(struct s_s2 *a)
{
	put_image(a, "./xpms/empty.xpm");
	a->x += 50;
	put_image(a, "./xpms/zoro.xpm");
	return (0);
}

int	ft_move_left(struct s_s2 *a)
{
	put_image(a, "./xpms/empty.xpm");
	a->x -= 50;
	put_image(a, "./xpms/zoro.xpm");
	return (0);
}
