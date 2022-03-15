/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_select.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:25:26 by dgutin            #+#    #+#             */
/*   Updated: 2022/03/15 19:04:16 by dgutin           ###   ########.fr       */
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
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_pconv(va_list arg)
{
	int			i;
	uintptr_t	x;

	x = va_arg(arg, uintptr_t);
	i = 0;
	ft_putstr_fd("0x", 1);
	ft_putptr_base(x, "0123456789abcdef");
	while (x / 16)
	{
		x /= 16;
		i++;
	}
	return (i + 3);
}

int	ft_dconv(va_list arg)
{
	int	i;
	int	x;

	i = 0;
	x = va_arg(arg, int);
	ft_putnbr_fd(x, 1);
	while (x / 10)
	{
		x /= 10;
		i++;
	}
	if (x >= 0)
		return (i - 1);
	return (i);
}

int	ft_iconv(va_list arg)
{
	return (ft_dconv(arg));
}

int	ft_uconv(va_list arg)
{
	unsigned int	i;
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

	i = 0;
	x = va_arg(arg, uintptr_t);
	ft_putptr_base(x, "0123456789abcdef");
	while (x / 16)
	{
		x /= 16;
		i++;
	}
	if (x >= 0)
		return (i - 1);
	return (i);
}

int	ft_x2conv(va_list arg)
{
	int			i;
	uintptr_t	x;

	i = 0;
	x = va_arg(arg, uintptr_t);
	ft_putptr_base(x, "0123456789ABCDEF");
	while (x / 16)
	{
		x /= 16;
		i++;
	}
	if (x >= 0)
		return (i - 1);
	return (i);
}

int	ft_prctconv(void)
{
	ft_putchar_fd('%', 1);
	return (0);
}

int	ft_parsing(const char *str, va_list arg, int i)
{
	int				index;
	char			flags[9] = "cspdiuxX%";
	static t_tab	tab[8] = {ft_cconv, ft_sconv, ft_pconv, ft_dconv, ft_iconv,
		ft_uconv, ft_xconv, ft_x2conv};

	index = 0;
	while (str[i] != flags[index])
		index++;
	if (index == 8)
		return (ft_prctconv());
	if (str[i] != flags [index])
	{
		ft_putchar_fd(str[i], 1);
		return (0);
	}
	return (tab[index](arg));
}
