/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:21:39 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/24 16:24:18 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	res;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	res = n;
	if (res > 9)
	{
		ft_putnbr_fd(res / 10, fd);
		res %= 10;
	}
	ft_putchar_fd('0' + res, fd);
}
