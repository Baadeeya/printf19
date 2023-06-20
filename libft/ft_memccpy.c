/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:04:25 by dagutin           #+#    #+#             */
/*   Updated: 2022/10/03 13:04:28 by dagutin          ###   ########.fr       */
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
