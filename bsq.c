/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnagy <lnagy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 21:45:25 by lnagy             #+#    #+#             */
/*   Updated: 2016/01/24 21:45:27 by lnagy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		is_sq(char **map, int i, int j, int size)
{
	int c;
	int	d;

	d = i;
	while (map[d] && d < i + size)
	{
		c = j;
		while (map[d][c] && c < j + size)
		{
			if (map[d][c] == map[0][ft_strlen(map[0]) - 2])
			{
				return (0);
			}
			c++;
		}
		if (c != j + size)
			return (0);
		d++;
	}
	if (d != i + size)
		return (0);
	return (1);
}

void	biggestsq(char **map, t_sq *sq, int i, int j)
{
	int	size;

	size = sq->size + 1;
	while (is_sq(map, i, j, size) == 1)
	{
		sq->x = i;
		sq->y = j;
		sq->size = size;
		size++;
	}
}

t_sq	bsq(char **map)
{
	t_sq	sq;
	int		i;
	int		j;

	sq.size = 0;
	sq.x = 1;
	sq.y = 0;
	i = 1;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			biggestsq(map, &sq, i, j);
			j++;
		}
		i++;
	}
	return (sq);
}
