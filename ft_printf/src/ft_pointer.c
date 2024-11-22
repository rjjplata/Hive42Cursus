/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:59:21 by rplata            #+#    #+#             */
/*   Updated: 2024/11/22 13:23:36 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_pointer(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (ft_putstr("(nil)"));
	else
	{
		len += ft_putstr("0x");
		len += ft_digit((long)n, 16);
	}
	return (len);
}
