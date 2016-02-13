/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnagy <lnagy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 01:03:30 by lnagy             #+#    #+#             */
/*   Updated: 2016/01/28 01:03:33 by lnagy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_square(t_sq *sq, int i, int j)
{
	if ((sq->x <= i && i < sq->x + sq->size)
		&& (sq->y <= j && j < sq->y + sq->size))
		return (1);
	return (0);
}

void	print_map(char **map, t_sq *sq)
{
	char	full;
	int		i;
	int		j;

	full = map[0][ft_strlen(map[0]) - 1];
	i = 1;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (is_square(sq, i, j))
				ft_putchar(full);
			else
				ft_putchar(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
