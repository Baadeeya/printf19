/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:13:31 by dagutin           #+#    #+#             */
/*   Updated: 2023/06/20 13:13:35 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_uconv(unsigned int n)
{
	if (n > 9)
	{
		ft_putnbr_uconv(n / 10);
		n %= 10;
	}
	ft_putchar_fd(n + 48, 1);
}

int	ft_uconv(va_list arg)
{
	int				i;
	unsigned int	x;

	i = 1;
	x = va_arg(arg, unsigned int);
	ft_putnbr_uconv(x);
	while (x / 10)
	{
		x /= 10;
		i++;
	}
	return (i);
}

int	ft_xconv(va_list arg)
{
	int				i;
	unsigned int	x;

	i = 1;
	x = va_arg(arg, unsigned int);
	ft_putunbr_base(x, "0123456789abcdef");
	while (x / 16)
	{
		x /= 16;
		i++;
	}
	if (x >= 0)
		return (i);
	return (i + 1);
}

int	ft_x2conv(va_list arg)
{
	int				i;
	unsigned int	x;

	i = 1;
	x = va_arg(arg, unsigned int);
	ft_putunbr_base(x, "0123456789ABCDEF");
	while (x / 16)
	{
		x /= 16;
		i++;
	}
	if (x >= 0)
		return (i);
	return (i + 1);
}

int	ft_prctconv(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
