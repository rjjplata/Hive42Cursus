
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
int	ft_pointer(void *ptr);

#endif