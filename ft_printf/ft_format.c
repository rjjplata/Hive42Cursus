/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:17:57 by root              #+#    #+#             */
/*   Updated: 2024/11/22 19:41:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char specifier, va_list argp)
{
	int	i;

	i = 0;
	if (specifier == 'c')
		i += ft_putchar(va_arg(argp, int));
	else if (specifier == 's')
		i += ft_putstr(va_arg(argp, char *));
	else if (specifier == 'd' || specifier == 'i')
		i += ft_digit((long)(va_arg(argp, int)), 10);
	else if (specifier == 'x')
		i += ft_digit((long)(va_arg(argp, unsigned int)), 16);
	else if (specifier == 'X')
		i += ft_hexaupper((long)(va_arg(argp, unsigned int)), 16);
	else if (specifier == 'u')
		i += ft_digit((long)(va_arg(argp, unsigned int)), 10);
	else if (specifier == 'p')
	{
		i += ft_pointer(va_arg(argp, void *));
	}
	else
		i += write(1, &specifier, 1);
	return (i);
}
