/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:59:21 by rplata            #+#    #+#             */
/*   Updated: 2024/11/22 19:42:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_ptr(unsigned long n, int base)
{
	char	*hexalower;
	int		i;

	hexalower = "0123456789abcdef";
	if (n < (unsigned long) base)
		return (ft_putchar(hexalower[n]));
	else
	{
		i = ft_ptr(n / base, base);
		return (i + ft_ptr(n % base, base));
	}
}

int	ft_pointer(void *ptr)
{
	int		len;
	long	point;

	len = 0;
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	else
	{
		point = (long)ptr;
		len += ft_putstr("0x");
		len += ft_ptr(point, 16);
	}
	return (len);
}
