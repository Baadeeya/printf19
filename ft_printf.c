/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:28:59 by dgutin            #+#    #+#             */
/*   Updated: 2021/10/04 15:04:11 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_set_points(t_conv *conv)
{
	conv->c = 0;
	conv->s = 0;
	conv->p = 0;
	conv->d = 0;
	conv->u = 0;
	conv->i = 0;
	conv->x = 0;
	conv->X = 0;
}

int	ft_printf(const char *str, ...)
{
	int		ret;
	t_conv	*conv;

	if (!str)
		return (-1);
	ret = 0;
	va_start(g_conv, str);
	while (str)
	{
	}
	ft_set_points(conv);
	return (ret);
}
