/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnagy <lnagy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 04:03:50 by lnagy             #+#    #+#             */
/*   Updated: 2016/01/05 04:03:51 by lnagy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;

	if (!(tmp = (char *)malloc(sizeof(char) *
		(ft_strlen((char *)s1) + ft_strlen((char *)s2)) + 1)))
		return (NULL);
	ft_strcpy(tmp, s1);
	ft_strcpy(tmp + ft_strlen((char *)s1), s2);
	return (tmp);
}
