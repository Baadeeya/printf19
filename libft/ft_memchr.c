/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:32:57 by dgutin            #+#    #+#             */
/*   Updated: 2021/04/02 13:26:51 by dgutin           ###   ########.fr       */
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
