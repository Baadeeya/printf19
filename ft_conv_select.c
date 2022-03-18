/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_select.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:25:26 by dgutin            #+#    #+#             */
/*   Updated: 2022/03/18 17:00:15 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_isconv(const char *str, int i)
{
	if (str[i] == 'c')
		return (0);
	if (str[i] == 's')
		return (1);
	if (str[i] == 'p')
		return (2);
	if (str[i] == 'd')
		return (3);
	if (str[i] == 'i')
		return (4);
	if (str[i] == 'u')
		return (5);
	if (str[i] == 'x')
		return (6);
	if (str[i] == 'X')
		return (7);
	if (str[i] == '%')
		return (8);
	return (-1);
}

int	ft_parsing(const char *str, va_list arg, int i)
{
	int				index;
	static t_tab	tab[8] = {ft_cconv, ft_sconv, ft_pconv, ft_dconv, ft_iconv,
		ft_uconv, ft_xconv, ft_x2conv};

	index = 0;
	if (!str[i])
		return (0);
	index = ft_isconv(str, i);
	if (index == 8)
		return (ft_prctconv());
	if (index == -1)
	{
		ft_putchar_fd(str[i], 1);
		return (0);
	}
	return (tab[index](arg));
}
