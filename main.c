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
		if ((map = map_error(tab)) == NULL)
			return (0);
		sq = bsq(map);
		print_map(map, &sq);
		++j;
	}
	return(0);
}