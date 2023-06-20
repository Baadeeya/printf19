/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:02:10 by dagutin           #+#    #+#             */
/*   Updated: 2022/10/03 13:02:14 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	unsigned int	i;

	i = 0;
	if (!(n))
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long			i;
	unsigned long	nb;
	char			*str;
	int				neg;

	nb = n;
	neg = 0;
	if (n < 0)
	{
		nb *= -1;
		neg = 1;
	}
	i = ft_count(n);
	str = (char *)malloc(sizeof(char) * (ft_count(n) + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (n < 0)
		str[0] = '-';
	while (i-- > neg)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
