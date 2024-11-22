/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:58:44 by rplata            #+#    #+#             */
/*   Updated: 2024/11/22 13:07:45 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_digit(long n, int base)
{
	char	*hexalower;
	int		i;

	hexalower = "0123456789abcdef";
	if (n < 0)
	{
		write (1, "-", 1);
		return (ft_digit(-n, base) + 1);
	}
	else if (n < base)
		return (ft_putchar(hexalower[n]));
	else
	{
		i = ft_digit(n / base, base);
		return (i + ft_digit(n % base, base));
	}
}
