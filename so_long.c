/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 08:44:32 by atabiti           #+#    #+#             */
/*   Updated: 2022/03/25 13:21:14 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_open_to_read(char **argv)
{
	int	fd;

	fd = open(argv[1], O_RDONLY);
	if (fd < 1)
	{
		write(2, "\nError ADD VALID MAP!\n", 22);
		exit(1);
	}
	return (fd);
}

int	main(int argc, char **argv)
{
	int			x;
	int			fd;
	struct s_s2	b;
	struct s_s2	*a;

	a = &b;
	if (argc == 1 || argc > 2)
	{
		write(2, "\nError CHECK ARGS\n", 18);
		exit(1);
	}
	x = ft_strlen(argv[1]);
	if (argv[1][x - 1] == 'r' && argv[1][x - 2] == 'e' && argv[1][x - 3] == 'b'
			&& argv[1][x - 4] == '.' && argv[1][0] == 'm'
			&& argv[1][1] == 'a' && argv[1][2] == 'p' && argv[1][3] == '/')
	{
		fd = ft_open_to_read(argv);
		ft_continue_1(a, fd);
		ft_draw_1_e_c_0_p(a);
		mlx_key_hook((*a).win, deal_key, a);
		mlx_hook(a->win, 17, 0L, redcross, a);
		mlx_loop((*a).mlx);
	}
	else
		write(2, "\nError Please check MAP extension (.ber)\n", 41);
}
