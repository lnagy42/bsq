/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnagy <lnagy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 04:02:33 by lnagy             #+#    #+#             */
/*   Updated: 2016/01/05 04:02:39 by lnagy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nbwrd(const char *s, char c)
{
	int i;
	int	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			++i;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i])
			++i;
		++j;
	}
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	char			**tmp;
	unsigned int	i;
	unsigned int	len;
	unsigned int	j;

	j = 0;
	i = 0;
	if (!(tmp = (char **)malloc(sizeof(char *) * (nbwrd((char *)s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		len = 0;
		while (s[i] == c)
			++i;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i])
		{
			++i;
			++len;
		}
		tmp[j] = ft_strsub(s, i - len, len);
		++j;
	}
	tmp[j] = NULL;
	return (tmp);
}
