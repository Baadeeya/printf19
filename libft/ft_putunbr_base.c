/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:39:17 by dgutin            #+#    #+#             */
/*   Updated: 2022/03/18 18:49:01 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_base(char c, char *base)
{
	while (*base)
		if (c == *base++)
			return (1);
	return (0);
}

static void	ft_display(unsigned int n, char *base, unsigned int i)
{
	if (n > i - 1)
	{
		ft_display(n / i, base, i);
		n %= i;
	}
	ft_putchar_fd(base[n], 1);
}

void	ft_putunbr_base(unsigned int nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13)
			|| ft_base(base[i], base + i + 1))
			return ;
		i++;
	}
	if (i < 2)
		return ;
	ft_display(nbr, base, i);
}
