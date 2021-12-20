/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putupperhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:11:06 by mcherki           #+#    #+#             */
/*   Updated: 2021/12/18 21:26:03 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num /= 16;
	}
	return (len);
}

int	ft_putupperhex(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 16)
		ft_putupperhex((n / 16));
	ft_putchar(UPPER_HEX[n % 16]);
	return (ft_len(n));
}
