/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:59:52 by rplata            #+#    #+#             */
/*   Updated: 2024/11/22 14:33:40 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if(!str)
        	return (write(1, "(null)", 6));
	while (*str)
	{
		i += ft_putchar((int)*str++);
	}
	return (i);
}
