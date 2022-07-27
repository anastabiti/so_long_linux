/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deal_key.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:56:02 by atabiti           #+#    #+#             */
/*   Updated: 2022/03/25 11:50:12 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	deal_key3(struct s_s2 *a, int h)
{
	if (a->exactarray[a->y_p][a->x_p - 1] == 'E' && h >= a->collectible)
	{
		write(1, "\n YOU WIN\n", 10);
		ft_free(a->exactarray, a->to_free + 1);
		exit(1);
	}
	if (a->exactarray[a->y_p][a->x_p - 1] == 'E' && h < a->collectible)
	{
		return (0);
	}
	else
	{
		ft_move_left(a);
					a->ft_movements += 1;
	a->x_p -= 1;
	}
	return (0);
}

int	deal_key2(struct s_s2 *a, int h)
{
	if (a->exactarray[a->y_p][a->x_p + 1] != '1')
	{		
		if (a->exactarray[a->y_p][a->x_p + 1]
			== 'E' && h >= a->collectible)
		{
			write(1, "\n YOU WIN\n", 10);
			ft_free(a->exactarray, a-> to_free + 1);
			exit(1);
		}
		if (a->exactarray[a->y_p][a->x_p + 1]
			== 'E' && h < a->collectible)
		{
			return (0);
		}
		else
		{
			ft_move_right(a);
						a->ft_movements += 1;
		a->x_p += 1;
		}
	}
	return (0);
}

int	deal_key4(struct s_s2 *a, int h)
{
	if (a->exactarray[a->y_p - 1][a->x_p] == 'E' && h >= a->collectible)
	{
		write(1, "\n YOU WIN\n", 10);
		ft_free(a->exactarray, a->to_free + 1);
		exit(1);
	}
	if (a->exactarray[a->y_p - 1][a->x_p] == 'E' && h < a->collectible)
	{
		return (0);
	}
	else
	{
		ft_move_up(a);
					a->ft_movements += 1;
	a->y_p -= 1;
	}
	return (1);
}

int	deal_key5(struct s_s2 *a, int h)
{
	if (a->exactarray[a->y_p + 1][a->x_p] == 'E' && h >= a->collectible)
	{
		write(1, "\n YOU WIN\n", 10);
		ft_free(a->exactarray, a->to_free + 1);
		exit(1);
	}
	if (a->exactarray[a->y_p + 1][a->x_p] == 'E' && h < a->collectible)
	{
		return (0);
	}
	else
	{
		ft_move_down(a);
					a->ft_movements += 1;
	a->y_p += 1;
	}
	return (1);
}		
