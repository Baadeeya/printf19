/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:06:34 by dgutin            #+#    #+#             */
/*   Updated: 2021/04/02 13:39:10 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen((char *)s);
	if (c == 0)
		return ((char *)s + ft_strlen((char *)s));
	while (i--)
		if (s[i] == c)
			return ((char *)s + i);
	return (0);
}
