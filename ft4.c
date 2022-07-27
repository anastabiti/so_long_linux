/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 08:38:32 by atabiti           #+#    #+#             */
/*   Updated: 2022/03/25 13:48:28 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
		/*
		
0 for an empty space,
1 for a wall,
C for a collectible,
E for a map exit,
P for the player’s starting position.

*/
void	ft_free(char **s, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

void	ft_continue_1(struct s_s2 *a, int fd)
{
	ft_xpm_files(a);
	a->new [a->height] = get_next_line(fd);
	if (!a->new[0] || a->new[0][0] == '\n')
	{
		write(2, "\nError BAD MAP!\n", 16);
		ft_free(a->new, 1);
		exit(1);
	}
	while (a->new[a->height])
	{
		if (ft_strlen(a->new[a->height]) < ft_strlen(a->new[0])
			|| ft_strlen(a->new[a->height]) > ft_strlen(a->new[0]))
		{
			write(2, "\nError BAD MAP!\n", 16);
			ft_free(a->new, a->height + 1);
			exit(1);
		}
		ft_check_chars(a, a->new[a->height]);
		a->height++;
		a->new [a->height] = get_next_line(fd);
	}
	a->to_free = a->height;
	close(fd);
	ft_errors_2(a);
}

void	ft_check_wall(struct s_s2 *a)
{
	if (a->exactarray [a->i][0] == 'E' || a->exactarray [a->i][0] == 'C'
			|| a->exactarray [a->i][0] == ('P')
			|| a->exactarray [a->i][0] == '0')
		ft_printer2(a->exactarray, a->to_free);
	else if (a->exactarray [a->i][a->linelenght - 2] == 'E'
			|| a->exactarray [a->i][a->linelenght - 2] == 'C'
				|| a->exactarray [a->i][a->linelenght - 2]
			== ('P') || a->exactarray [a->i][a->linelenght - 2] == '0')
		ft_printer2(a->exactarray, a->to_free);
	else if (a->exactarray[0][a->r] == '0' || a->exactarray[0][a->r]
			== 'E' || a->exactarray[0][a->r] == 'P')
		ft_printer2(a->exactarray, a->to_free);
	else if (a->exactarray[a->stringscount - 1][a->r] == '0'
			|| a->exactarray[a->stringscount - 1][a->r] == 'E'
				|| a->exactarray[a->stringscount - 1][a->r] == 'P')
		ft_printer2(a->exactarray, a->to_free);
}

void	ft_draw_1_e_c_0_p(struct s_s2 *a)
{
	a->i = 0;
	a->r = 0;
	while (a->exactarray [a->i])
	{
		while (a->exactarray[a->i][a->r])
		{
			ft_check_wall(a);
			if (a->exactarray [a->i][a->r] == '1')
			{
				a->img = mlx_xpm_file_to_image(a->mlx,
						a->wall, &a->img_width, &a->img_height);
				mlx_put_image_to_window(a->mlx,
					a->win, a->img, a->w, a->h);
				a->w = a->w + 50;
			}
			ft_c_e(a);
			a->r++;
		}
		a->w = 0;
		a->h = a->h + 50;
		a->r = 0;
		a->i++;
	}
	ft_errors_1(a);
}

void	ft_check_chars(struct s_s2 *a, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == 'C' || s[i] == 'P' || s[i] == 'E'
			|| s[i] == '0' || s[i] == '1' || s[i] == '\n')
		{
			i++;
		}
		else
		{
			write(1, "ERROR\n", 6);
			ft_free(a->new, a->height + 1);
			exit(1);
		}
	}
		a->starting_pos = 0;
		a->collectible = 0;
		a->ft_exit = 0;
}
