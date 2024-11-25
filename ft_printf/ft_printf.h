/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:55:44 by rplata            #+#    #+#             */
/*   Updated: 2024/11/22 14:03:43 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *form, ...);
int	ft_format(char specifier, va_list argp);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_digit(long n, int base);
int	ft_hexaupper(long n, int base);
int	ft_pointer(unsigned long n);

#endif
