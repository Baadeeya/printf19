/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <dgutin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 17:31:25 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/23 15:04:20 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	if (c == 0)
		return ((char *)s + ft_strlen((char *)s));
	while (s[++i])
		if (s[i] == c)
			return ((char *)s + i);
	return (NULL);
}
