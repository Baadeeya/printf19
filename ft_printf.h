/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:36:03 by dgutin            #+#    #+#             */
/*   Updated: 2022/03/14 18:22:02 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int						ft_printf(const char *str, ...);
int						ft_parsing(const char *str, va_list, int i);
typedef long int		intptr;
typedef int				(*t_tab)(va_list arg);

//int		ft_printf(const char *str, ...);
// void	ft_putnbr_base(int nbr, char *base);

#endif
