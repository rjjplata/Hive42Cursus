/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 22:49:00 by root              #+#    #+#             */
/*   Updated: 2024/11/20 21:17:08 by root             ###   ########.fr       */
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
        ft_putchar((int)*str)
        i++;
        str++;
    }
    return i;
}

int ft_digit(long n, int base)
{
    int i;
    char    *hexa;

    hexa = "0123456789abcdef";
    if (n < 0)
    {
        write (1, "-", 1);
        return ft_digit(-n, base) + 1;
    }
    else if (n < base)
        return ft_putchar(hexa[n]);
    else
    {
        i = ft_digit(n / base, base);
        return i + ft_digit(n % base, base);
    }
    

}

int ft_format(char specifier, va_list argp)
{
   

    i = 0;
    if (specifier == 'c')
        i += ft_putchar(va_arg(argp, int));
    else if (specifier == 's')
        i += ft_putstr(va_arg(argp, char *));
    else if (specifier == 'i')
        i += ft_putnum(va_arg(argp, int));
    else if (specifier == 'd')
        i += ft_digit(va_arg(argp, int), 10);
    else if (specifier == 'p')
        i += ft_pointer(va_arg(argp, void *));
    else if (specifier == 'u')
        i += ft_unsigned(va_arg(argp, unsigned int));
    else if (specifier == 'x')
        i += ft_hexalower(va_arg(argp, unsigned int), 16);
    else if (specifier == 'X')
        i += ft_hexaupper(va_arg(argp, int));
    else
        i += write(1, &specifier, 1);
}

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
            write(1, form, 1);      // try with i += write(1, form, 1) if it doesn't work
            ++form;
            i++;
    }
    va_end(argp);
    return (i);
}

int main()
{
    int count;

    count = ft_printf("%x\n", 42);
    ft_printf("the chars are %d\n", count);
}