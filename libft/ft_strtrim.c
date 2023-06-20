/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:08:18 by dagutin           #+#    #+#             */
/*   Updated: 2022/10/03 13:08:23 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_set(char const s1, char const *set)
{
	while (*set)
		if (s1 == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] && ft_is_set(s1[i], set))
		i++;
	x = ft_strlen(s1) - 1;
	while (ft_is_set(s1[x], set))
		x--;
	return (ft_substr(s1, i, x - i + 1));
}
