/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:36:03 by dgutin            #+#    #+#             */
/*   Updated: 2022/03/18 17:00:03 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int					ft_printf(const char *str, ...);
int					ft_parsing(const char *str, va_list arg, int i);
int					ft_cconv(va_list arg);
int					ft_sconv(va_list arg);
int					ft_pconv(va_list arg);
int					ft_dconv(va_list arg);
int					ft_iconv(va_list arg);
int					ft_uconv(va_list arg);
int					ft_xconv(va_list arg);
int					ft_x2conv(va_list arg);
int					ft_prctconv(void);
typedef int			(*t_tab)(va_list arg);

#endif
