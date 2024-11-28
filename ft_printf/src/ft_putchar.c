/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:59:40 by rplata            #+#    #+#             */
/*   Updated: 2024/11/28 13:36:10 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putchar(int c)
{
	int	errorcheck;

	errorcheck = write(1, &c, 1);
	if (errorcheck == 1)
		return (errorcheck);
	else
		return (-1);
}
