/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:04:01 by dagutin           #+#    #+#             */
/*   Updated: 2022/10/03 13:04:07 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	d;

	i = -1;
	p = (unsigned char *)s;
	d = (unsigned char)c;
	while (++i < n)
		if (*(p + i) == d)
			return ((void *)(s + i));
	return (0);
}
