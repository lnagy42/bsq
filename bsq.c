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

int		is_sq(char **map, int j, int i, int size)
{
	int c;
	int	d;

	d = i;
	ft_putchar('1');
	while(map[d] && d < i + size)
	{
		ft_putchar('2');
		c = j;
		while(map[d][c] && c < j + size)
		{
			ft_putchar('3');
		/*	if (map[d][c] == map[0][ft_strlen(map[0]) - 2])
			{
				ft_putchar('4');
				return (0);
			}*/
			c++;
		}
		if (c != j + size)
			return (0);
		d++;
	}
	ft_putchar('5');
	if (d != i + size)
		return (0);
	return (1);
}

void	biggestsq(char **map, t_sq *sq, int i, int j)
{
	int	size;
ft_putchar('\n');
print_map(map, sq);

	size = sq->size + 1;
	ft_putchar('J');
	while (is_sq(map, i, j, size) == 1)
	{
		ft_putchar('K');
		sq->x = i;
		sq->y = j;
		sq->size = size;
		size++;
	}
	ft_putchar('L');
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
	while(map[i])
	{
		j = 0;
		while(map[i][j])
		{
			biggestsq(map, &sq, i, j);
			j++;
		}
		i++;
	}
	return (sq);
}
