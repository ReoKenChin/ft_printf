/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:10:17 by mcherki           #+#    #+#             */
/*   Updated: 2021/12/18 21:27:42 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned long num)
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

int	ft_putpointer(unsigned long ptr)
{
	if (ptr >= 16)
		ft_putpointer((ptr / 16));
	ft_putchar(LOW_HEX[ptr % 16]);
	return (ft_len(ptr));
}
