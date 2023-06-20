/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:05:46 by dagutin           #+#    #+#             */
/*   Updated: 2022/10/03 13:05:52 by dagutin          ###   ########.fr       */
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
