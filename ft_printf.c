/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:28:59 by dgutin            #+#    #+#             */
/*   Updated: 2022/03/18 17:00:24 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printalnum(const char *str, int i)
{
	if (ft_isdigit(str[i]))
		ft_putnbr_base(str[i] - 48, "0123456789");
	else
		ft_putchar_fd(str[i], 1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		x;
	int		ret;
	va_list	arg;

	i = 0;
	ret = 0;
	x = 0;
	va_start(arg, str);
	while (str[i])
	{
		while (str[i] != '%' && str[i])
		{
			ft_printalnum(str, i++);
			ret++;
		}
		if (!str[i])
			break ;
		x = ft_parsing(str, arg, ++i);
		ret += x;
		if (str[i])
			i++;
	}
	va_end(arg);
	return (ret);
}
