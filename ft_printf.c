/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:13:48 by dagutin           #+#    #+#             */
/*   Updated: 2023/06/20 13:13:51 by dagutin          ###   ########.fr       */
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
