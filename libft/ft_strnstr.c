/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:08:02 by dagutin           #+#    #+#             */
/*   Updated: 2022/10/03 13:08:05 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (!needle || !needle)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		x = 0;
		while (haystack[i + x] == needle[x] && i + x < len)
		{
			if (needle[x] == 0)
				return ((char *)haystack + i);
			x++;
		}
		if (needle[x] == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
