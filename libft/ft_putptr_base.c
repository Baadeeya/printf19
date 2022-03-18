/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:23:34 by dgutin            #+#    #+#             */
/*   Updated: 2022/03/18 15:42:42 by dgutin           ###   ########.fr       */
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

static void	ft_display(uintptr_t n, char *base, uintptr_t i)
{
	if (n > i - 1)
	{
		ft_display(n / i, base, i);
		n %= i;
	}
	ft_putchar_fd(base[n], 1);
}

void	ft_putptr_base(uintptr_t nbr, char *base)
{
	uintptr_t	i;

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
	else
		ft_display(nbr, base, i);
}
