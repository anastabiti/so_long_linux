/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f3.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:31:34 by atabiti           #+#    #+#             */
/*   Updated: 2022/03/23 11:19:34 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_collectible_right(struct s_s2 *a, int h)
{
	if (a->exactarray[a->y_p][a->x_p + 1] == 'C')
	{
		h += 1;
		a->exactarray[a->y_p][a->x_p + 1] = '0';
	}
	return (h);
}

int	check_collectible_left(struct s_s2 *a, int h)
{
	if (a->exactarray[a->y_p][a->x_p - 1] == 'C')
	{
		h += 1;
		a->exactarray[a->y_p][a->x_p - 1] = '0';
	}
	return (h);
}

int	check_collectible_up(struct s_s2 *a, int h)
{
	if (a->exactarray[a->y_p - 1][a->x_p] == 'C')
	{
		h += 1;
		a->exactarray[a->y_p - 1][a->x_p] = '0';
	}
	return (h);
}

int	check_collectible_down(struct s_s2 *a, int h)
{
	if (a->exactarray[a->y_p + 1][a->x_p] == 'C')
	{
		h += 1;
		a->exactarray[a->y_p + 1][a->x_p] = '0';
	}	
	return (h);
}
