/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:54:45 by mcherki           #+#    #+#             */
/*   Updated: 2021/12/18 21:30:40 by mcherki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

# define LOW_HEX "0123456789abcdef"
# define UPPER_HEX "0123456789ABCDEF"
# define DIGITS "0123456789"

int	ft_printf(const char *str, ...);
int	ft_putupperhex(unsigned int ptr);
int	ft_putlowerhex(unsigned int ptr);
int	ft_putpointer(unsigned long ptr);
int	ft_unsignednbr(unsigned int n);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);

#endif
