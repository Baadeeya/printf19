/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:01:19 by dagutin           #+#    #+#             */
/*   Updated: 2023/01/10 14:29:03 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*m;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	m = malloc(size * count);
	if (!m)
		return (NULL);
	ft_bzero(m, size * count);
	return (m);
}
