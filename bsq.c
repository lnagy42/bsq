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

t_sq	bsq(char **map, t_sq sq)
{
	int	i;
	int	j;
	int	c;
	int	d;

	i = 1;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			c = i;
			while (map[c])
			{
				d = j;
				while (map[c][d] == map[0][ft_strlen(map[0]) - 3] && j + sq.size >= d)
					++d;
				if (map[c][d] == map[0][ft_strlen(map[0]) - 2)
				++c;
			}
			++j;
		}
		++i;
	}
	return (sq);
}

sqintab(char **map)
{
	t_sq	sq;

	sq.size = 0;
}
