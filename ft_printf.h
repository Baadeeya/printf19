/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:36:03 by dgutin            #+#    #+#             */
/*   Updated: 2021/10/05 13:18:43 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);

va_list			g_conv;

typedef int		(*t_tab)(int a, int b);

typedef struct s_conv
{
	int			c;
	int			s;
	int			p;
	int			d;
	int			u;
	int			x;
}				t_conv;

#endif
