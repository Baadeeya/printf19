/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_select.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:25:26 by dgutin            #+#    #+#             */
/*   Updated: 2021/10/11 14:00:58 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_parsing(const char *str, va_list arg, int i)
{
	int				index;
	const char		flags[10];
	static t_tab	tab[8] = {c_conv, s_conv, p_conv, d_conv, i_conv, u_conv,
		x_conv, x2_convm prct_conv};

	flags = "cspdiuxX%";
	index = 0;

	while (str[i] != flags[index])
		index++;
	if (str[i] != flags [index])
	{
		ft_putchar(str[i]);
		return (1); // peut-etre return 0 pour contrer le char '%'
	}
	return (tab[index](str, i, arg));
}
