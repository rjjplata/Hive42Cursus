/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:59:07 by rplata            #+#    #+#             */
/*   Updated: 2024/11/22 13:10:16 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_hexaupper(long n, int base)
{
	char	*hexaupper;
	int		i;

	hexaupper = "0123456789ABCDEF";
	if (n < 0)
	{
		write (1, "-", 1);
		return (ft_hexaupper(-n, base) + 1);
	}
	else if (n < base)
		return (ft_putchar(hexaupper[n]));
	else
	{
		i = ft_hexaupper(n / base, base);
		return (i + ft_hexaupper(n % base, base));
	}
}
