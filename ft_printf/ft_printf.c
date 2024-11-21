/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 22:49:00 by root              #+#    #+#             */
/*   Updated: 2024/11/22 00:31:26 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putchar(int c)
{
    return write(1, &c, 1);
}

int ft_putstr(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        i += ft_putchar((int)*str++);
    }
    return i;
}

int ft_hexaupper(long n, int base)
{
    int i;
    char    *hexaupper;

    hexaupper = "0123456789ABCDEF";
    if (n < 0)
    {
        write (1, "-", 1);
        return ft_hexaupper(-n, base) + 1;
    }
    else if (n < base)
        return ft_putchar(hexaupper[n]);
    else
    {
        i = ft_hexaupper(n / base, base);
        return i + ft_hexaupper(n % base, base);
    }
}

int ft_digit(long n, int base)
{
    int i;
    char    *hexalower;

    hexalower = "0123456789abcdef";
    if (n < 0)
    {
        write (1, "-", 1);
        return ft_digit(-n, base) + 1;
    }
    else if (n < base)
        return ft_putchar(hexalower[n]);
    else
    {
        i = ft_digit(n / base, base);
        return i + ft_digit(n % base, base);
    }
}

int ft_format(char specifier, va_list argp)
{
   int i;

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
        i += ft_hexaupper((long)(va_arg(argp, unsigned int)), 16); //explicit typecast to a long to trick the overflow when there is a minus sign
    else if (specifier == 'u')
        i += ft_digit((long)(va_arg(argp, unsigned int)), 10);
//    else if (specifier == 'p')
//        i += ft_pointer((unsigned long)va_arg(argp, void *));
    else
        i += write(1, &specifier, 1);
    return i;
}

int ft_printf(const char *form, ...)
{
    va_list argp;
    int i;
    int len;

    va_start(argp, form);
    i = 0;
    len = 0;
    while (form[i])
    {
        if(form[i] == '%')
        {
            len += ft_format ((form[i+1]), argp);
            i++;
        }
        else
            len += ft_putchar(form[i]);
        i++;
    }
    va_end(argp);
    return (len);
}

int main()
{
    int count;

    ft_printf("the char is %X", 2323323);
}