/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnagy <lnagy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 21:46:39 by lnagy             #+#    #+#             */
/*   Updated: 2016/01/24 21:46:42 by lnagy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_sq
{
	int	x;
	int	y;
	int size;
}				t_sq;

char			*ft_strcpy(char *dest, const char *src);
int				ft_strlen(char *s);
void			ft_putchar(char c);
void			ft_putstr(char *s);
char			**ft_strsplit(char const *s, char c);
int				ft_atoi(const char *s);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_isdigit(int c);
char			*read_file(char *nm_fl);
char			**check_char(char **tab);
char			**map_error(char *tab);
int				is_square(t_sq *sq, int i, int j);
void			print_map(char **map, t_sq *sq);
t_sq			bsq(char **map);
void			biggestsq(char **map, t_sq *sq, int i, int j);
int				is_sq(char **map, int j, int i, int size);

#endif
