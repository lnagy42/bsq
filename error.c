/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnagy <lnagy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 00:06:09 by lnagy             #+#    #+#             */
/*   Updated: 2016/01/12 00:06:12 by lnagy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*read_file(char *nm_fl)
{
	int		fd;
	char	buf[151];
	char	*tab;
	int		rd;

	tab = "";
	fd = open(nm_fl, O_RDONLY);
	if (fd == -1)
		write(1, "File doesn't exist.", 19);
	else
	{
		while ((rd = read(fd, buf, 150)))
		{
			buf[rd] = '\0';
			tab = ft_strjoin(tab, buf);
		}
	}
	return (tab);
}

char	**ft_error(void)
{
	write(2, "map error\n", 10);
	return (NULL):
} 

char	**check_char(char **tab)
{
	int	i;
	int	j;
	int	c;
	int	d;

	i = 0;
	j = 0;
	c = 0;
	while (tab[i])
		++i;
	if (ft_atoi(ft_strsub(tab[0], 0, ft_strlen(tab[0]) - 3) != i - 1)
		return (ft_error());
	while (ft_isdigit(tab[0][j]) == 1)
		++j;
	d = j;
	i = 0;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			if (tab[c][d] != tab[i][j] && tab[c][d + 1] != tab[i][j])
				return (ft_error());
	}
	return (tab);
}

char	**map_error(char *tab)
{
	int		i;
	int		j;
	char	**tmp;

	j = 0;
	i = 1;
	if (!tab || (tab[ft_strlen(tab) - 1] != '\n'))
	{
		write(2, "map error\n", 10);
		return (NULL);
	}
	tmp = ft_strsplit(tab, '\n');
	if (check_char(tmp) == NULL)
		return (NULL);
	while (tmp[i])
	{
		if (tmp[i + 1] != NULL && ft_strlen(tmp[i]) != ft_strlen(tmp[i + 1]))
		{
			write(2, "map error\n", 10);
			return (NULL);
		}
		++i;
	}
	return (tmp);
}
