/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:28:59 by dgutin            #+#    #+#             */
/*   Updated: 2021/10/05 15:42:52 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_flags(char *str, int i)
{
}

int	ft_printf(const char *str, ...)
{
	int				ret;
	int				i;
	int				x;
	char			flags[10];
	static t_tab	tab[8] = {c_flag, s_flag, p_flag, d_flag, i_flag, u_flag, 
		x_flag, x2_flag, prct_flag};

	if (!str)
		return (0);
	ret = 0;
	i = 0;
	x = 0;
	flags = "cspdiuxX%";
	va_start(g_conv, str);
	while (str[i])
	{
		while (str[i] != '%')
		{
			if (ft_isnum(str[i]))
				ft_putnbr_base(str[i] - 48, "0123456789");
			else
				write(1, &str[i], 1);
		}
		while (str[i])
		{
			while (str[i] != flags[x] && flags[x])
				x++;
			if (x == 7)
				if (ft_isnum(str[i]))

					i++;
			x = 0;
		}
	}
	va_end(g_conv;)
		return (ret);
}
