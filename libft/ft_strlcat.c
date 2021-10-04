/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:54:12 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/25 15:01:59 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = -1;
	len = ft_strlen(dst);
	if (dstsize <= len)
		return (ft_strlen(src) + dstsize);
	while (src[++i] && i < dstsize - len - 1)
		dst[len + i] = src[i];
	dst[len + i] = 0;
	return (len + ft_strlen(src));
}
