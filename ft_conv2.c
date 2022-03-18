/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:54:18 by dgutin            #+#    #+#             */
/*   Updated: 2022/03/18 17:02:02 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uconv(va_list arg)
{
	int				i;
	unsigned int	x;

	i = 0;
	x = va_arg(arg, unsigned int);
	ft_putnbr_fd(x, 1);
	while (x / 10)
	{
		x /= 10;
		i++;
	}
	return (i - 1);
}

int	ft_xconv(va_list arg)
{
	int			i;
	uintptr_t	x;

	i = 1;
	x = va_arg(arg, uintptr_t);
	ft_putptr_base(x, "0123456789abcdef");
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
	int			i;
	uintptr_t	x;

	i = 1;
	x = va_arg(arg, uintptr_t);
	ft_putptr_base(x, "0123456789ABCDEF");
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
