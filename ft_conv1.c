/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:13:19 by dagutin           #+#    #+#             */
/*   Updated: 2023/06/20 13:13:24 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cconv(va_list arg)
{
	int	c;

	if (!arg)
		return (-1);
	c = va_arg(arg, int);
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_sconv(va_list arg)
{
	char	*str;

	if (!arg)
		return (-1);
	str = va_arg(arg, char *);
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return ((int)ft_strlen(str));
}

int	ft_pconv(va_list arg)
{
	int			i;
	uintptr_t	x;

	x = va_arg(arg, uintptr_t);
	ft_putstr_fd("0x", 1);
	i = 3;
	ft_putptr_base(x, "0123456789abcdef");
	while (x / 16)
	{
		x /= 16;
		i++;
	}
	return (i);
}

int	ft_dconv(va_list arg)
{
	int	i;
	int	x;

	i = 1;
	x = va_arg(arg, int);
	ft_putnbr_fd(x, 1);
	while (x / 10)
	{
		x /= 10;
		i++;
	}
	if (x >= 0)
		return (i);
	return (i + 1);
}

int	ft_iconv(va_list arg)
{
	return (ft_dconv(arg));
}
