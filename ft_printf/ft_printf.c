/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 22:49:00 by root              #+#    #+#             */
/*   Updated: 2024/11/26 14:54:06 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *form, ...)
{
	va_list	argp;
	int		i;
	int		len;

	va_start(argp, form);
	i = 0;
	len = 0;
	while (form[i] != '\0')
	{
		if (form[i] == '%' && form[i + 1] == '\0')
			return (-1);
		if (form[i] == '%')
		{
			len += ft_format((form[i + 1]), argp);
			i++;
		}
		else
			len += ft_putchar(form[i]);
		i++;
	}
	va_end(argp);
	return (len);
}
