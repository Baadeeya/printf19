/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:28:59 by dgutin            #+#    #+#             */
/*   Updated: 2022/03/14 18:15:34 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		x;
	int		len;
	va_list	arg;

	i = 0;
	x = 0;
	len = 0;
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
		if (!str[i])
			break ;
		i++;
		len += (ft_parsing(str, arg, i++));
	}
	va_end(arg);
	return (len + i);
}
