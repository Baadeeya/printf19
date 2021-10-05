/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:28:59 by dgutin            #+#    #+#             */
/*   Updated: 2021/10/05 17:46:57 by dgutin           ###   ########.fr       */
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
			if (ft_isnum(str[i]))
				ft_putnbr_base(str[i++] - 48, "0123456789");
			else
				write(1, &str[i++], 1);
		}
		if (!str[i])
			break ;
		i++;
		len += (ft_parsing(str, arg, i));
		i++;
	}
	va_end(arg);
	return (len + i);
}
