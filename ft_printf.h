/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:36:03 by dgutin            #+#    #+#             */
/*   Updated: 2021/10/12 10:30:27 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

//typedef long int		intptr;
//typedef int			(*t_tab)(va_list arg);

//int		ft_printf(const char *str, ...);
void	ft_putnbr_base(int nbr, char *base);
int		main(void);

#endif
