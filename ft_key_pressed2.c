/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_pressed2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 08:51:51 by atabiti           #+#    #+#             */
/*   Updated: 2022/07/27 18:40:34 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_key_w(int key, struct s_s2 *a)
{
	if (key == 119)
	{
		if (a->exactarray[a->y_p - 1][a->x_p] != '1')
		{
			a->collects = check_collectible_up(a, a->collects);
			deal_key4(a, a->collects);
			ft_printer(a->ft_movements);
		}
	}
	return (0);
}

int	ft_key_a(int key, struct s_s2 *a)
{
	if (key == 97)
	{
		if (a->exactarray[a->y_p][a->x_p - 1] != '1')
		{
			a->collects = check_collectible_left(a, a->collects);
			deal_key3(a, a->collects);
			ft_printer(a->ft_movements);
		}
	}
	return (0);
}

void	ft_printer(int i)
{
	write(1, "\n", 1);
	ft_putnbr(i);
}

void	ft_printer2(char **s, int size)
{
	write(2, "\nError BAD MAP\n", 15);
	ft_free(s, size);
	exit(1);
}
