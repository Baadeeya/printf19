/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_select.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:25:26 by dgutin            #+#    #+#             */
/*   Updated: 2021/10/12 11:00:55 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cconv(va_list arg)
{
	char	c;

	if (!arg)
		return (-1);
	c = va_arg(arg, char);
	ft_putchar(c);
	return (1);
}

int	ft_sconv(va_list arg)
{
	int		i;
	char	*str;

	if (!arg)
		return (-1);
	i = 0;
	str = va_arg(arg, char *);
	while (i < ft_strlen(str))
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_pconv(va_list arg)
{
	void	*ptr;
	intptr	adr;
	int		i;

	ptr = va_arg(arg, void *);
	adr = (intptr)ptr;
	ft_putchar_fd("0x", 1);
	i = 0;
	ft_putnbr_base(adr, "0123456789abcdef");
	while (adr / 16)
	{
		x /= 16;
		i++;
	}
	return (i + 3);
}

int	ft_dconv(va_list arg)
{
	int	i;
	int	x;

	i = 0;
	x = va_arg(arg, int);
	ft_putnbr_fd(x, 1);
	while (x / 10)
	{
		x /= 10;
		i++;
	}
	return (i + 1);
}

int	ft_iconv(va_list arg)
{
	return (ft_dconv(arg));
}

int	ft_uconv(va_list arg)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = va_arg(arg, unsigned int);
	ft_putnbr_fd(x, 1);
	while (x / 10)
	{
		x /= 10;
		i++;
	}
	return (i + 1);
}

int	ft_xconv(va_list arg)
{
	int		i;
	intptr	x;

	i = 0;
	x = va_arg(arg, int);
	ft_putnbr_base(x, "0123456789abcdef");
	while (x / 16)
	{
		x /= 16;
		i++;
	}
	return (i + 1);
}

int	ft_x2conv(va_list arg)
{
	int		i;
	intptr	x;

	i = 0;
	x = va_arg(arg, int);
	ft_putnbr_base(x, "0123456789ABCDEF");
	while (x / 16)
	{
		x /= 16;
		i++;
	}
	return (i + 1);
}

int	ft_prctconv(void);
{
	int	i;
}

/*
int	ft_pconv(va_list arg)
{
	int		count;
	int		i;
	void	*ptr;

	if (!arg)
		return (-1);
	count = 0;
	ptr = va_arg(arg, void);
	i = (sizeof(ptr) << 3) - 4;
	while (i >= 0)
	{
		ft_putchar(ft_hex_digits((p >> i) & 0xf));
		i -= 4;
	}
}
*/
int	ft_parsing(const char *str, va_list arg, int i)
{
	int				index;
	const char		flags[10];
	static t_tab	tab[7] = {ft_cconv, ft_sconv, ft_pconv, ft_dconv, ft_iconv,
		ft_uconv, ft_xconv, ft_x2conv};

	flags = "cspdiuxX%";
	index = 0;
	while (str[i] != flags[index])
		index++;
	if (str[i] != flags [index])
	{
		ft_putchar(str[i]);
		return (1); // peut-etre return 0 pour contrer le char '%'
	}
	if (index == 8)
	return (tab[index](arg));
}
