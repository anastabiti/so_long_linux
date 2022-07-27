/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f1.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 10:02:22 by atabiti           #+#    #+#             */
/*   Updated: 2022/03/25 11:54:33 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	redcross(struct s_s2 *a)
{
	write(1, "\nClosed Successfully\n", 21);
	ft_free(a->exactarray, a->to_free + 1);
	exit(1);
}

void	ft_xpm_files(struct s_s2 *a)
{
	a->x = 0;
	a->y = 0 ;
	a->wall = "./xpms/wall4.xpm";
	a->zoro = "./xpms/zoro.xpm";
	a->treasure = "./xpms/treasure2.xpm";
	a->empty = "./xpms/empty.xpm";
	a->door = "./xpms/ship2.xpm";
	a->img_height = 50;
	a->img_width = 50;
	a->height = 0;
		a->new = malloc(800000 * sizeof(char));
	if (!a->new)
		exit(1);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (s == NULL && d == NULL)
		return (NULL);
	if (d < s && (*d != '\0' || *s != '\0'))
		return (ft_memcpy(dst, src, len));
	if (s < d)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*castdest;
	const char	*castsrc;

	castdest = dst;
	castsrc = src;
	if (!castsrc && !castdest)
		return (NULL);
	while (n--)
		*castdest++ = *castsrc++;
	return (dst);
}
