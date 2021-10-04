/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <dgutin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 18:53:35 by dgutin            #+#    #+#             */
/*   Updated: 2021/04/02 13:35:54 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	int		i;
	int		x;

	if (!s1 || !s2)
		return (NULL);
	cat = malloc(sizeof(char) * (ft_strlen(s1) + 1 + ft_strlen(s2)));
	if (!cat)
		return (NULL);
	i = -1;
	while (s1[++i])
		cat[i] = s1[i];
	x = -1;
	while (s2[++x])
		cat[i++] = s2[x];
	cat[i] = '\0';
	return (cat);
}
