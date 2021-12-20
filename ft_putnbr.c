/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:09:43 by mcherki           #+#    #+#             */
/*   Updated: 2021/12/18 21:26:45 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		len++;
		num = -num;
	}
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	long int	a;

	a = n;
	if (a < 0)
	{
		ft_putchar('-');
		a *= -1;
	}
	if (a > 9)
		ft_putnbr((a / 10));
	ft_putchar((a % 10) + '0');
	return (ft_len(n));
}
