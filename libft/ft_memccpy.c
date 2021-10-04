/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:59:07 by dgutin            #+#    #+#             */
/*   Updated: 2021/04/02 13:26:29 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned const char	*psrc;
	unsigned char		*pdst;

	i = -1;
	psrc = (unsigned const char *)src;
	pdst = (unsigned char *)dst;
	if (!(n))
		return (NULL);
	while (++i < n)
	{
		*(pdst + i) = *(psrc + i);
		if (*(psrc + i) == (unsigned char)c)
			return ((void *)dst + i + 1);
	}
	return (NULL);
}
