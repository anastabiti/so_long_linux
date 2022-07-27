/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:33:19 by atabiti           #+#    #+#             */
/*   Updated: 2022/03/25 11:54:03 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_errors_1(struct s_s2 *a)
{
	if (a->collectible < 1)
	{
		write(2, "\nError NO COLLECTIBLE\n", 22);
		ft_free(a->exactarray, a->to_free + 1);
		exit(1);
	}
	if (a->starting_pos < 1)
	{
		write(2, "\nError NO STARTING POSITION!\n", 29);
		ft_free(a->exactarray, a->to_free + 1);
		exit(1);
	}
	if (a->ft_exit < 1)
	{
		write(2, "\nError NO EXIT!\n", 16);
		ft_free(a->exactarray, a->to_free + 1);
		exit(1);
	}
}

void	ft_errors_2(struct s_s2 *a)
{
		a->linelenght = ft_strlen(a->new[0]);
	a->stringscount = a->height;
	a->width = (a->linelenght - 1) * 50;
	a->height = a->height * 50 ;
	if (a->width == a->height)
	{
		write(2, "\nError The map must be rectangular!\n", 36);
		ft_free(a->new, a->to_free + 1);
		exit(1);
	}
	ft_exactmalloc(a);
}
