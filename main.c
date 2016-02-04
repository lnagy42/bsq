/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnagy <lnagy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 16:54:42 by lnagy             #+#    #+#             */
/*   Updated: 2016/02/02 16:54:43 by lnagy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*tab;
	t_sq	sq;
	char	**map;

	(void)ac;
	j = 1;
	while (av[j])
	{
		i = 0;
		tab = read_file(av[j]);
		write(1, "lo1", 3);
		map = map_error(tab);
		write(1, "lo2", 3);
		sq = bsq(map);
		write(1, "lo3", 3);
		print_map(map, &sq);
		write(1, "lo4", 3);
		++j;
	}
	return(0);
}