/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:24:49 by frrusso           #+#    #+#             */
/*   Updated: 2022/01/21 17:24:51 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(va_list list)
{
	int		i;
	char	*res;

	res = ft_itoa((int)va_arg(list, int));
	i = ft_putstr(res);
	free(res);
	return (i);
}

int	ft_printf_hex(long unsigned int hex)
{
	int		i;
	char	*hexa;

	i = 0;
	hexa = "0123456789abcdef";
	if (hex > 15)
		i += ft_printf_hex(hex / 16);
	ft_putchar_fd(hexa[hex % 16], 0);
	return (i + 1);
}

int	ft_printf_ptr(long unsigned int ptr)
{
	int	i;

	ft_putstr("0x");
	i = ft_printf_hex(ptr);
	return (i + 2);
}

int	ft_printf_uns(va_list list)
{
	int		i;
	char	*res;

	res = ft_utoa((unsigned int)va_arg(list, unsigned int));
	i = ft_putstr(res);
	free(res);
	return (i);
}
