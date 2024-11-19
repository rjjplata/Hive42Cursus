/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 22:49:00 by root              #+#    #+#             */
/*   Updated: 2024/11/20 00:21:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *form, ...)
{
    va_list argp;
    int i;

    va_start(argp, form);
    i = 0;
    while (form[i] != '\0')
    {
        if (form[i] == '%')
            ft_format(*(++form), argp);
            i++;
        else
            write(1, form, 1);
            ++form;
            i++;
    }
    va_end(argp);
    return (i);
}