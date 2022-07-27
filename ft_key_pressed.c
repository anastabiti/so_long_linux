/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_pressed.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 08:51:47 by atabiti           #+#    #+#             */
/*   Updated: 2022/07/27 18:44:20 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_key_s(int key, struct s_s2 *a)
{
	// printf("key is %d   \n", key);
	if (key == 115)
	{
		if (a->exactarray[a->y_p + 1][a->x_p] != '1')
		{
			a->collects = check_collectible_down(a, a->collects);
			deal_key5(a, a->collects);
			ft_printer(a->ft_movements);
		}
		else
			return (0);
	}
	return (0);
}

int	ft_key_d(int key, struct s_s2 *a)
{
	if (key == 100)
	{
		if (a->exactarray[a->y_p][a->x_p + 1] != '1')
		{
			a->collects = check_collectible_right(a, a->collects);
			deal_key2(a, a->collects);
			ft_printer(a->ft_movements);
		}
	}
	return (0);
}
