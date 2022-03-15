/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:28:59 by dgutin            #+#    #+#             */
/*   Updated: 2022/03/15 18:27:48 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		x;
	int		o;
	int		len;
	va_list	arg;

	i = 0;
	len = 0;
	o = 0;
	va_start(arg, str);
	while (str[i])
	{
		while (str[i] != '%' && str[i])
		{
			if (ft_isdigit(str[i]))
				ft_putnbr_base(str[i++] - 48, "0123456789");
			else
				ft_putchar_fd(str[i++], 1);
		}
		o = i;
		if (!str[i])
			break ;
		x = ft_parsing(str, arg, ++i);
		if (x)
			len += x;
		i++;
	}
	va_end(arg);
	return (len + o);
}
