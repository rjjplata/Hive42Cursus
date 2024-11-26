/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:17:57 by root              #+#    #+#             */
/*   Updated: 2024/11/26 14:54:04 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char specifier, va_list argp)
{
	int	i;

	i = 0;
	if (specifier == 'c')
		i += ft_putchar((char)va_arg(argp, int));
	else if (specifier == 's')
		i += ft_putstr((char *)va_arg(argp, char *));
	else if (specifier == 'd' || specifier == 'i')
		i += ft_digit((long)(va_arg(argp, int)), 10);
	else if (specifier == 'x')
		i += ft_digit((long)(va_arg(argp, unsigned int)), 16);
	else if (specifier == 'X')
		i += ft_hexaupper((long)(va_arg(argp, unsigned int)), 16);
	else if (specifier == 'u')
		i += ft_digit((long)(va_arg(argp, unsigned int)), 10);
	else if (specifier == 'p')
		i += ft_pointer(va_arg(argp, void *));
	else if (specifier == '%')
		i += ft_putchar('%');
	return (i);
}
