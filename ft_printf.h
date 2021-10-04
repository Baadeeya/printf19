/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:36:03 by dgutin            #+#    #+#             */
/*   Updated: 2021/10/04 15:09:20 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);

typedef struct s_conv
{
	va_list		conv;
	int			c;
	int			s;
	int			p;
	int			d;
	int			u;
	int			i;
	int			x1;
	int			x2;
}				t_conv;

#endif
