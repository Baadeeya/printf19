/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:06:31 by dgutin            #+#    #+#             */
/*   Updated: 2021/10/11 14:39:56 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	ft_putchar(base[n]);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int i;

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
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_display(-nbr, base, i);
	}
	else
		ft_display(nbr, base, i);
}
