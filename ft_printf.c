/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:09:03 by mcherki           #+#    #+#             */
/*   Updated: 2021/12/18 21:44:17 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list arg, const char convert)
{
	int	len;

	len = 0;
	if (convert == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (convert == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (convert == 'd' || convert == 'i')
		len += ft_putnbr(va_arg(arg, int));
	else if (convert == 'u')
		len += ft_unsignednbr(va_arg(arg, unsigned int));
	else if (convert == 'x')
		len += ft_putlowerhex(va_arg(arg, unsigned int));
	else if (convert == 'X')
		len += ft_putupperhex(va_arg(arg, unsigned int));
	else if (convert == 'p')
	{
		len += ft_putstr("0x");
		len += ft_putpointer(va_arg(arg, unsigned long));
	}
	else if (convert == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	ap;

	len = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len += ft_format(ap, *str);
		}
		else
			len += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (len);
}
