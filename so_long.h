/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 08:46:15 by atabiti           #+#    #+#             */
/*   Updated: 2022/07/27 18:27:24 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <mlx.h>
# include <string.h>
# define BUFFER_SIZE 42

struct s_s2
{
	int		starting_pos;
	int		ft_exit;
	int		h;
	int		w;
	void	*mlx;
	void	*img;
	int		img_width;
	int		img_height;
	char	**new;
	char	**exactarray;
	char	*wall;
	char	*zoro;
	char	*treasure;
	char	*empty;
	char	*door;
	void	*win ;
	int		x;
	int		y;
	int		x_p;
	int		y_p;
	int		collectible;
	int		linelenght;
	int		stringscount;
	int		width;
	int		height;
	int		r;	
	int		i;
	int		collects;
	int		ft_movements;
	int		to_free;
};

char		*get_next_line(int fd);
char		*ft_strchr(char *s, int c);
int			ft_strlen(char *s);
char		*ft_join(char *s1, char *s2);
void		ft_putnbr(int n);
void		ft_putchar(char c);
int			deal_key(int key, struct s_s2 *a);
int			ft_move_right(struct s_s2 *a);
void		ft_draw_1_e_c_0_p(struct s_s2 *a);
int			ft_move_left(struct s_s2 *a);
int			ft_move_up(struct s_s2 *a);
int			ft_move_down(struct s_s2 *a);
void		ft_continue_1(struct s_s2 *a, int fd);
void		ft_xpm_files(struct s_s2 *a);
void		put_image(struct s_s2 *a, char *imgname);
void		check_map_errors(struct s_s2 *a);
int			redcross(struct s_s2 *a);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		ft_exactmalloc(struct s_s2 *a);
void		ft_c_e(struct s_s2 *a);
int			deal_key2(struct s_s2 *a, int h);
int			deal_key3(struct s_s2 *a, int h);
int			deal_key4(struct s_s2 *a, int h);
int			deal_key5(struct s_s2 *a, int h);
void		ft_printer(int i);
int			check_collectible_right(struct s_s2 *a, int h);
int			check_collectible_left(struct s_s2 *a, int h);
int			check_collectible_up(struct s_s2 *a, int h);
int			check_collectible_down(struct s_s2 *a, int h);
void		ft_printer2(char **s, int size);
int			ft_key_s(int key, struct s_s2 *a);
int			ft_key_d(int key, struct s_s2 *a);
int			ft_key_a(int key, struct s_s2 *a);
int			ft_key_w(int key, struct s_s2 *a);
void		ft_errors_1(struct s_s2 *a);
void		ft_errors_2(struct s_s2 *a);
void		ft_check_chars(struct s_s2 *a, char *s);
void		ft_free(char **s, int size);
#endif
