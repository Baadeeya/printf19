/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:28:59 by dgutin            #+#    #+#             */
/*   Updated: 2021/10/05 14:09:02 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
void	ft_set_points(t_conv *conv)
{
	conv->c = 0;
	conv->s = 0;
	conv->p = 0;
	conv->d = 0;
	conv->u = 0;
	conv->i = 0;
	conv->x1 = 0;
	conv->x2 = 0;
}
*/
int		ft_is_flag(char c)
{
	return (c == 99 || c == 115 || c == 112 || c == 100 || c == 105 || c == 117 ||
			c == 120 || c == 88 || c == 37)
}

void	ft_check_flags(char *str, int i)
{

}

int	ft_printf(const char *str, ...)
{
	int				ret;
	int				i;
	int				x;
	char			flags[10];
//	t_conv			*conv;
	static t_tab	tab[7] = {c_flag, s_flag, p_flag, d_flag, u_flag, x_flag, 
			prct_flag};

	if (!str)
		return (0);
	ret = 0;
	i = 0;
	x = 0;
	flags = "cspdiuxX%";
	va_start(g_conv, str);
	while (str[i])
	{
		while (str[i] != flags[x] && flags[x])
			x++;
		if (x == 7)
			write(1, str[i], 1);
//		ft_set_points(conv);
		i++;
	}
	va_end(g_conv;)
	return (ret);
}
